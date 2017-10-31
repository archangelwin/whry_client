#pragma once
#ifndef __UPDATE_HELPER_H__
#define __UPDATE_HELPER_H__

#include "cocos2d.h"
#include "ParticleRenderer.h"
#include "ParticleEmitter.h"

using namespace PRender;
using namespace pp;

class UpdateHelper {
public:
	static UpdateHelper* instance;
	static UpdateHelper* getInstance();

	// ��һ������λ��ֳ������μ��� , polygonPoints ����εĵ㼯�� ��triangleVec �������ɵ������μ���
	void changePolygonToTriangleVec(std::vector<Vec2>& polygonPoints, std::vector<triangle>* triangleVec);

	// �������ӵ��˶�
	void updateParticleMove(particleProperty& p,float dt);

	//// ������������
	// �� ������ ����ֵ����ȡ��ȷ�� �������� ֵ
	float getValueFromEmitterVarietyValue(emitterVarietyValue& value, emitterFirePro& firePro);
	// �����������������ڵ�����
	void setParticleVarietyValue(particleVarietyValue &pValue, emitterVarietyValue &eValue, float pLife);

	// �Ӷ���ֵ����ȡ��ȷ�� ��ɫ ֵ
	Color3B getValueFromEmitterVarietyColorValue(emitterColorValue& value , emitterFirePro& firePro);
	// �����������������ڵ�����
	void setParticleVarietyColorValue(particleColorValue &pValue, emitterColorValue &eValue, float pLife);

	// // ���ݷ���������������ʼ������ ����
	void initParticlePro(ParticleEmitter* father,emitterFirePro& firePro ,particleProperty* particle);

	// ����һ�� ��������
	void updateFirePro(ParticleEmitter* father , emitterFirePro& firePro, childrenPar& cPar, float dt);

private:

};


#endif // !__UPDATE_HELPER_H__

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}
TargetGenerator::~TargetGenerator() {
	vector<ATarget*>::iterator itb = this->target_types.begin();
	vector<ATarget*>::iterator ite = this->target_types.end();
	for (vector<ATarget*>::iterator it = itb;it != ite;it++)
		delete *it;
	this->target_types.clear();
}
void TargetGenerator::learnTargetType(ATarget *target) {
	if (target)
	{
		vector<ATarget*>::iterator itb = this->target_types.begin();
		vector<ATarget*>::iterator ite = this->target_types.end();
		for (vector<ATarget*>::iterator it = itb;it != ite;it++)
		{
			if ((*it)->getType() == target->getType())
				return;
		}
		this->target_types.push_back(target->clone());
	}
}
void TargetGenerator::forgetTargetType(const string &target_type) {
		vector<ATarget*>::iterator itb = this->target_types.begin();
		vector<ATarget*>::iterator ite = this->target_types.end();
		for (vector<ATarget*>::iterator it = itb;it != ite;it++)
		{
			if ((*it)->getType() == target_type)
			{
				delete *it;
				it = this->target_types.erase(it);
			}
		}

}
ATarget* TargetGenerator::createTarget(const string &target_type) {
		vector<ATarget*>::iterator itb = this->target_types.begin();
		vector<ATarget*>::iterator ite = this->target_types.end();
		for (vector<ATarget*>::iterator it = itb;it != ite;it++)
		{
			if ((*it)->getType() == target_type)
				return (*it);
		}
	return (nullptr);
}
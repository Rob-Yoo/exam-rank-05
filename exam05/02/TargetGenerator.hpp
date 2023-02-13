#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include "ATarget.hpp"
# include <vector>

using namespace std;

class TargetGenerator {
private:
	vector<ATarget*> target_types;
	TargetGenerator(const TargetGenerator& other);
	TargetGenerator &operator=(const TargetGenerator& other);

public:
	TargetGenerator();
	virtual ~TargetGenerator();
	void learnTargetType(ATarget *target);
	void forgetTargetType(const string &target_type);
	ATarget *createTarget(const string &target_type);
};

#endif
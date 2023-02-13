#include "ATarget.hpp"

ATarget::ATarget(): type() {}
ATarget::~ATarget() {}
ATarget::ATarget(const string &type): type(type) {}
ATarget::ATarget(const ATarget& other) {
	*this = other;
}
ATarget &ATarget::operator=(const ATarget& other) {
	this->type = other.getType();
	return *this;
}

const string& ATarget::getType() const {
	return this->type;
}

void ATarget::getHitBySpell(const ASpell& spell) const {
	cout << this->type << " has been " << spell.getEffects() <<"!\n";
}
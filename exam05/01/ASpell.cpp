#include "ASpell.hpp"

ASpell::ASpell(): name(), effects() {}
ASpell::ASpell(const string &name, const string &effects): name(name), effects(effects) {}
ASpell::ASpell(const ASpell& other) {
	*this = other;
}
ASpell::~ASpell() {}

ASpell &ASpell::operator=(const ASpell& other) {
	this->name = other.getName();
	this->effects = other.getEffects();
	return (*this);
}
string ASpell::getName() const {
	return this->name;
}
string ASpell::getEffects() const {
	return this->effects;
}

void ASpell::launch (const ATarget& target) const {
	target.getHitBySpell(*this);
}
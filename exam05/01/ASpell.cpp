#include "ASpell.hpp"

ASpell::ASpell(const string &name, const string &effects): name(name), effects(effects) {}

const string& getName() const {
	return this->name;
}
const string& getEffects() const {
	return this->effects;
}
void ATarget::launch(const ATargert& atarget) {
	atarget.getHitBySpell(*this);
}

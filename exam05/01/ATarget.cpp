#include "ATarget.hpp"

ATargert::ATargert(const string& type): type(type) {}

const string& ATarget::getType() const { return this->type; }

void ATarget::getHitBySpell(const ASpell &aspell) {
	cout << this->type << " has been " << aspell.getEffects() << "!\n";
}

#include "Warlock.hpp"


Warlock::Warlock(const string& name, const string& title): name(name), title(title) {
	cout << this->name << ":  This looks like another boring day.\n";
}

Warlock::~Warlock() {
	cout << this->name << ": My job here is done!\n";
}

void Warlock::introduce() const {
	cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";
}

const string& Warlock::getName() const {
	return this->name;
}
const string& Warlock::getTitle() const {
	return this->title;
}

void Warlock::setTitle(const string& title) {
	this->title = title;
}

void Warlock::learnSpell(ASpell *spell_ptr) {
	this->spell_book.learnSpell(spell_ptr);
}
void Warlock::forgetSpell(const string& spell_name) {
	this->spell_book.forgetSpell(spell_name);
}
void Warlock::launchSpell(const string& spell_name, const ATarget& target) {
	ASpell *spell = this->spell_book.createSpell(spell_name);
	if (spell)
		spell->launch(target);
}
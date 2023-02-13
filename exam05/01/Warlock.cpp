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
	if (spell_ptr)
	{
		vector<ASpell*>::iterator itb = this->spells.begin();
		vector<ASpell*>::iterator ite = this->spells.end();
		for (vector<ASpell*>::iterator it = itb; itb != ite;it++)
		{
			if ((*it)->getName() == spell_ptr->getName())
				return ;
		}
		this->spells.push_back(spell_ptr->clone());
	}
}
void Warlock::forgetSpell(const string& spell_name) {
	vector<ASpell*>::iterator itb = this->spells.begin();
	vector<ASpell*>::iterator ite = this->spells.end();
	for (vector<ASpell*>::iterator it = itb;it != ite;it++)
	{
		if ((*it)->getName() == spell_name)
		{
			delete *it;
			it = this->spells.erase(it);
		}
	}
}
void Warlock::launchSpell(const string& spell_name, const ATarget& target) {
	vector<ASpell*>::iterator itb = this->spells.begin();
	vector<ASpell*>::iterator ite = this->spells.end();
	for (vector<ASpell*>::iterator it = itb;it != ite;it++)
	{
		if ((*it)->getName() == spell_name)
		{
			(*it)->launch(target);
			return ;
		}
	}
}
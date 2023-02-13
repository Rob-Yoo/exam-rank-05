#include "SpellBook.hpp"

SpellBook::SpellBook() {}
SpellBook::~SpellBook() {
	vector<ASpell*>::iterator itb = this->spells.begin();
	vector<ASpell*>::iterator ite = this->spells.end();
	for (vector<ASpell*>::iterator it = itb;it != ite;it++)
		delete *it;
	this->spells.clear();
}

void SpellBook::learnSpell(ASpell* spell_ptr) {
	if (spell_ptr)
	{
		vector<ASpell*>::iterator itb = this->spells.begin();
		vector<ASpell*>::iterator ite = this->spells.end();
		for (vector<ASpell*>::iterator it = itb; it != ite;it++)
		{
			if ((*it)->getName() == spell_ptr->getName())
				return ;
		}
		this->spells.push_back(spell_ptr->clone());
	}
}
void SpellBook::forgetSpell(const string& spell_name) {
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
ASpell* SpellBook::createSpell(const string& spell_name) {
	vector<ASpell*>::iterator itb = this->spells.begin();
	vector<ASpell*>::iterator ite = this->spells.end();
	for (vector<ASpell*>::iterator it = itb;it != ite;it++)
	{
		if ((*it)->getName() == spell_name)
			return (*it);
	}
	return (nullptr);
}
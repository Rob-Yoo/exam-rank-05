#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include "ASpell.hpp"
# include <vector>

using namespace std;

class SpellBook {
private:
	vector<ASpell*> spells;

	SpellBook(const SpellBook& other);
	SpellBook &operator=(const SpellBook& other);

public:
	SpellBook();
	virtual ~SpellBook();
	
	void learnSpell(ASpell* spell_ptr);
	void forgetSpell(const string& spell_name);
	ASpell* createSpell(const string& spell_name);
};

#endif
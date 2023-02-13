#ifndef WARLOCK_HPP
# include <iostream>
# include <string>
# include <vector>
# include "ASpell.hpp"
# include "ATarget.hpp"

using namespace std;

class Warlock {
private:
	string name;
	string title;
	vector<ASpell*> spells;

	Warlock();
	Warlock(const Warlock& other);
	Warlock &operator=(const Warlock& other);

public:
	Warlock(const string& name, const string& title);
	~Warlock();

	const string &getName() const;
	const string &getTitle() const;

	void setTitle(const string& title);

	void introduce() const;

	void learnSpell(ASpell *spell_ptr);
	void forgetSpell(const string& spell_name);
	void launchSpell(const string& spell_name, const ATarget& target);
};

#endif
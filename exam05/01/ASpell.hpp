#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include <string>
# include "ATarget.hpp"

using namespace std;

class ATarget;
class ASpell {
protected:
	string name;
	string effects;

public:
	ASpell();
	ASpell(const string &name, const string &effects);
	ASpell(const ASpell& other);
	virtual ~ASpell();

	ASpell &operator=(const ASpell& other);
	string getName() const;
	string getEffects() const;
	virtual ASpell *clone() const = 0;

	void launch(const ATarget& target) const;
};

#endif
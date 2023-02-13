#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include <string>
# include "ASpell.hpp"

using namespace std;

class ASpell;

class ATarget {
private:
	string type;
public:
	ATarget();
	virtual ~ATarget();
	ATarget(const string &type);
	ATarget(const ATarget& other);
	ATarget &operator=(const ATarget& other);

	virtual ATarget* clone() const = 0;

	const string& getType() const;

	void getHitBySpell(const ASpell& spell) const;
};

#endif
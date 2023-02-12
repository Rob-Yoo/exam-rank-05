#ifndef ATARGET_HPP
# define ATARGET_HPP

# include "ASpell.hpp"

using namespace std;

class ASpell;

class ATargert {
private:
	string type;

public:
	ATargert(const string& type);

	const string& getType() const;

	virtual ATargert *clone() const = 0;

	void getHitBySpell(const ASpell &aspell);
}

#endif
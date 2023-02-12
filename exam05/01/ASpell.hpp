#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include <string>
# include <ATarget.hpp>

using namespace std;

class ATargert;

class Aspell {
private:
	string name;
	string effects;

public:
	Aspell(const string& name, const string& effects);
	const string& getName() const;
	const string& getEffects() const;

	virtual Aspell *clone() const = 0;

	void launch(const ATargert& atarget);
};

#endif

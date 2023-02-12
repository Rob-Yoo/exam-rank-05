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
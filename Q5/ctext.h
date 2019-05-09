#ifndef CTEXT_H
#define CTEXT_H

#include<string>

class CText
{
public:
	CText() = default;		// Default constructor
	CText(std::string);		// Constructor
	std::string getText();
	~CText() = default;		// Destructor constructor

private:
	std::string text;
};

#endif
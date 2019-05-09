#include "ctext.h"

/* Constructor */
CText::CText(std::string str) : text{str} {}


std::string CText::getText()
{
	return text;
}

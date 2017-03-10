#pragma once
#include <string>

class Document {
public:
	Document::Document(std::string inText = "Nothing to see her!") { setText(inText); };

	void setText(std::string inText) { text = inText; };
	std::string getText() const { return text; };

	void operator=(const Document& src)
	{
		if (this == &src)
			return;
		setText(text);
	}
protected:
	std::string text;
};
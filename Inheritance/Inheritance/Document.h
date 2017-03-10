#pragma once
#include <string>
#include <iostream>

class Document {
public:
	Document::Document(std::string inText = "Nothing to see her!") { setText(inText); };
	~Document(){ setText(""); }; //Wipe all the data! ALL OF IT.

	void setText(std::string inText) { text = inText; };
	std::string getText() const { return text; };

	void operator=(const Document& src)
	{
		if (this == &src)
			return;
		setText(text);
	};

	void print_obj()
	{
		std::cout << "Text: " << text << std::endl;
	};

protected:
	std::string text;
};
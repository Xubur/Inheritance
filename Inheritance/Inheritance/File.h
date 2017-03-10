#pragma once
#include "Document.h"
#include <string>
#include <iostream>

class File : public Document
{
public:
	File::File(std::string inText = "", std::string inPath = "No Path specified.") { setPath(inPath); };
	~File() { setText(""); setPath(""); }; //NOPE. NOTHING. LEFT.

	void setPath(std::string inPath) { pathName = inPath; };
	std::string getPath() const { return pathName; };

	void operator=(const File& src)
	{
		if (this == &src)
			return;
		setText(src.getText());
		setPath(src.getPath());
	};

	void print_obj()
	{
		std::cout << "Path: " << pathName << std::endl;
		std::cout << "Text: " << getText() << std::endl;
	};
private:
	std::string pathName;
};

#pragma once
#include <string>
#include <iostream>
#include "Document.h"

class Email : public Document
{
public:
	Email::Email(std::string inText = "nothing to see here!", std::string inSender = "No Sender", std::string inRecipient = "No Recipient", std::string inTitle = "No Title.")
	{
		setText(inText);
		setSender(inSender);
		setRecipient(inRecipient);
		setTitle(inTitle);
	};
	~Email() { setText(""); setSender(""); setRecipient(""); setTitle(""); }; // NO TRACES. NOT EVEN HERE.


	void setSender(std::string inText) { sender = inText; }
	std::string getSender() const { return sender; };

	void setRecipient(std::string inText) { recipient = inText; }
	std::string getRecipient() const { return recipient; };

	void setTitle(std::string inText) { title = inText; };
	std::string getTitle() const { return title; };

	void operator=(const Email& src)
	{
		if (this == &src)
			return;
		setText(src.getText());
		setSender(src.getSender());
		setRecipient(src.getRecipient());
		setTitle(src.getTitle());
	};

	void print_obj()
	{
		std::cout << "From: " << getSender() << std::endl;
		std::cout << "To: " << getRecipient() << std::endl;
		std::cout << "Title: " << getTitle() << std::endl;
		std::cout << getText() << std::endl;
	};

private:
	std::string sender, recipient, title;
};

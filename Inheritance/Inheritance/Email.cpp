#pragma once
#include <string>
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
	}

private:
	std::string sender, recipient, title;
};

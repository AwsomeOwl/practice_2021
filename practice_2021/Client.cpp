#include "StdAfx.h"
#include "MainClientWindow.h"
#include <vector>
using namespace System;
using namespace std;
ref class Client
{
private:
	String^ Number;
	String^ AccountType; 
	String^	DocumentData;
	String^	LastAction;
	String^	RegistrationDate;
	double Value;
	unsigned int Rate;
public:
	 Client(String^ number, String^ accountType, String^ documentData, String^ lastAction, String^ registrationDate, double value, unsigned int rate)
		{
            this->Number = number;
            this->AccountType = accountType;  
			this->DocumentData = documentData;   
			this->LastAction = lastAction;  
			this->RegistrationDate = registrationDate; 
			this->Value = value;
			this->Rate = rate;  
        }
	 String^ getNumber()
	 {

		 return Number;

	 }
	 String^ getAccountType()
	 {

		 return AccountType;

	 }
	 String^ getDocumentData()
	 {

		 return DocumentData;

	 }
	 String^ getLastAction()
	 {

		 return LastAction;

	 }
	 String^ getRegistrationDate()
	 {

		 return RegistrationDate;

	 }
	 double getValue()
	 {

		 return Value;

	 }
	 unsigned int getRate()
	 {

		 return Rate;

	 }
	 /*String^ Find(String^ TempNumber, vector <Client> ClientVector, int Type)
	 {
		 if (Type == 1)
		 {
			 for (int i = 0; i < ClientVector.size();i++)
				 if (ClientVector[i].getNumber() == TempNumber)
				 {
					 return ClientVector[i].getNumber();
				 }
		 }
		 else
		 {
			 if (Type==2)
				for (int i = 0; i < ClientVector.size();i++)
					if (ClientVector[i].getDocumentData() == TempNumber)
					{
					 return ClientVector[i].getDocumentData();
					}
		 }*/
				 
	 };


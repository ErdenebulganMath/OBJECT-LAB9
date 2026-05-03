#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
#include "Person.h"
#include "Division.h"
#include "JobDescription.h"
#include "Spouse.h"
#include "Child.h"

using namespace std;

class Employee : public Person
{
private:
    string CompanyID;
    string Title;
    string StartDate;

    Spouse *spouse;
    vector<Child> children;
    Division *division;
    vector<JobDescription> description;

public:
    Employee()
    {
        spouse = nullptr;
        CompanyID = "";
        Title = "";
        StartDate = "";
    }

    Employee(Division *division, vector<JobDescription> description)
    {
        this->division = division;
        this->description = description;
    }

    string getCompanyID()
    {
        return CompanyID;
    }
    void setCompanyID(string CompanyID)
    {
        this->CompanyID = CompanyID;
    }
    string getTitle()
    {
        return Title;
    }
    void setTitle(string Title)
    {
        this->Title = Title;
    }
    string getStartDate()
    {
        return StartDate;
    }
    void setStartDate(string StartDate)
    {
        this->StartDate = StartDate;
    }

    void addDivision(Division *division)
    {
        this->division = division;
    }

    void addJobDescription(JobDescription jds)
    {
        description.push_back(jds);
    }

    void addSpouse(Spouse *spouse)
    {
        this->spouse = spouse;
    }

    void addChild(Child child)
    {
        children.push_back(child);
    }

    void print()
    {
        cout << "=== Employee Buh Medeelel ===" << endl;
        cout << left << setw(12) << "Name = " << getName()
             << left << setw(12) << "SSNum = " << getSsnum()
             << left << setw(12) << "Age = " << getAge() 
             << left << setw(12) << "CompanyID = " << CompanyID
             << left << setw(12) << "Title = " << Title
             << left << setw(12) << "StartDate = " << StartDate << endl;

        cout << "=== Division ===\n"
             << endl;
        cout << "DivisionName = " << division->getDivisionName() << endl;

        cout << "=== Job Description ===\n"
             << endl;
        for (int i = 0; i < description.size(); i++)
        {
            cout << "Description " << i + 1 << " = " << description[i].getDescription() << endl;
        }

        if (spouse != nullptr)
        {
            cout << "=== Spouse ===\n"
                 << endl;
            cout << left << setw(12) << "Name = " << spouse->getName()
                 << left << setw(12) << "SSNum = " << spouse->getSsnum()
                 << left << setw(12) << "Age = " << spouse->getAge()
                 << left << setw(12) << "AnniversaryDate = " << spouse->getAnniversaryDate() << endl;
        }

        else
        {
            cout << "Haven't Spouse" << endl;
        }

        cout << "=== Children ===\n"
             << endl;
        if (!children.empty())
        {
            for (int i = 0; i < children.size(); i++)
            {
                cout << left << setw(12) << "Name = " << children[i].getName()
                     << left << setw(12) << "SSNum = " << children[i].getSsnum()
                     << left << setw(12) << "Age = " << children[i].getAge()
                     << left << setw(12) << "FavoriteToy = " << children[i].getFavoriteToy() << endl;
            }
        }

        else
        {
            cout << "Haven't Children" << endl;
        }
    }
};

#endif
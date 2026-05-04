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
        cout << left << setw(18) << "Name = " << getName() << "\n"
             << left << setw(18) << "SSNum = " << getSsnum() << "\n"
             << left << setw(18) << "Age = " << getAge() << "\n"
             << left << setw(18) << "CompanyID = " << CompanyID << "\n"
             << left << setw(18) << "Title = " << Title << "\n"
             << left << setw(18) << "StartDate = " << StartDate << "\n";

        cout << "\n=== Division ===" << endl;
        cout << "DivisionName = " << division->getDivisionName() << endl;

        cout << "\n=== Job Description ===" << endl;
        for (int i = 0; i < description.size(); i++)
        {
            cout << "Description " << i + 1 << " = " << description[i].getDescription() << endl;
        }

        if (spouse != nullptr)
        {
            cout << "\n=== Spouse ===" << endl;
            cout << left << setw(22) << "Name = " << spouse->getName() << "\n"
                 << left << setw(22) << "SSNum = " << spouse->getSsnum() << "\n"
                 << left << setw(22) << "Age = " << spouse->getAge() << "\n"
                 << left << setw(22) << "AnniversaryDate = " << spouse->getAnniversaryDate() << "\n";
        }
        else
        {
            cout << "Haven't Spouse" << endl;
        }

        cout << "\n=== Children ===" << endl;
        if (!children.empty())
        {
            for (int i = 0; i < children.size(); i++)
            {
                if (i > 0)
                    cout << "  ---\n";
                cout << left << setw(18) << "Name = " << children[i].getName() << "\n"
                     << left << setw(18) << "SSNum = " << children[i].getSsnum() << "\n"
                     << left << setw(18) << "Age = " << children[i].getAge() << "\n"
                     << left << setw(18) << "FavoriteToy = " << children[i].getFavoriteToy() << "\n";
            }
        }
        else
        {
            cout << "Haven't Children" << endl;
        }
    }
};

#endif
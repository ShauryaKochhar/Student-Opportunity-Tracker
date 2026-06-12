#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

class Opportunity
{
public:
    string name;
    string category;
    string deadline;
};

class OpportunityManager
{
private:
    vector<Opportunity> opportunities;

public:
    void loadFromFile()
    {
        ifstream fin("opportunities.txt");

        if (!fin)
            return;

        Opportunity op;

        while (getline(fin, op.name))
        {
            getline(fin, op.category);
            getline(fin, op.deadline);

            opportunities.push_back(op);
        }

        fin.close();
    }

    void saveToFile()
    {
        ofstream fout("opportunities.txt");

        for (auto &op : opportunities)
        {
            fout << op.name << '\n';
            fout << op.category << '\n';
            fout << op.deadline << '\n';
        }

        fout.close();

        cout << "\nData saved successfully!\n";
    }

    void addOpportunity()
    {
        Opportunity op;

        cin.ignore();

        cout << "Enter Opportunity Name: ";
        getline(cin, op.name);

        cout << "Enter Category (Hackathon/Internship/Course/Workshop): ";
        getline(cin, op.category);

        cout << "Enter Deadline: ";
        getline(cin, op.deadline);

        opportunities.push_back(op);

        cout << "\nOpportunity Added Successfully!\n";
    }

    void viewOpportunities()
    {
        if (opportunities.empty())
        {
            cout << "\nNo Opportunities Available.\n";
            return;
        }

        cout << "\n===== ALL OPPORTUNITIES =====\n";
        for (int i = 0; i < opportunities.size(); i++)
        {
            cout << "\nOpportunity #" << i + 1 << '\n';
            cout << "Name      : " << opportunities[i].name << '\n';
            cout << "Category  : " << opportunities[i].category << '\n';
            cout << "Deadline  : " << opportunities[i].deadline << '\n';
        }
    }

    void searchOpportunity()
    {
        cin.ignore();

        string target;

        cout << "Enter Opportunity Name to Search: ";
        getline(cin, target);

        bool found = false;

        for (auto &op : opportunities)
        {
            if (op.name == target)
            {
                cout << "\nOpportunity Found!\n";
                cout << "Name      : " << op.name << '\n';
                cout << "Category  : " << op.category << '\n';
                cout << "Deadline  : " << op.deadline << '\n';

                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << "\nOpportunity Not Found.\n";
        }
    }

    void deleteOpportunity()
    {
        cin.ignore();

        string target;

        cout << "Enter Opportunity Name to Delete: ";
        getline(cin, target);

        for (int i = 0; i < opportunities.size(); i++)
        {
            if (opportunities[i].name == target)
            {
                opportunities.erase(opportunities.begin() + i);

                cout << "\nOpportunity Deleted Successfully!\n";
                return;
            }
        }

        cout << "\nOpportunity Not Found.\n";
    }

    void filterByCategory()
    {
        cin.ignore();

        string category;

        cout << "Enter Category: ";
        getline(cin, category);

        bool found = false;

        cout << "\n===== FILTERED RESULTS =====\n";

        for (auto &op : opportunities)
        {
            if (op.category == category)
            {
                cout << "\nName      : " << op.name << '\n';
                cout << "Deadline  : " << op.deadline << '\n';

                found = true;
            }
        }

        if (!found)
        {
            cout << "\nNo Opportunities Found.\n";
        }
    }

    void sortByName()
    {
        sort(opportunities.begin(),
             opportunities.end(),
             [](Opportunity &a, Opportunity &b)
             {
                 return a.name < b.name;
             });

        cout << "\nSorted Successfully!\n";
    }

    void totalOpportunities()
    {
        cout << "\nTotal Opportunities: "
             << opportunities.size() << '\n';
    }
};

int main()
{
    OpportunityManager manager;

    manager.loadFromFile();

    int choice;

    do
    {
        cout << "\n==================================\n";
        cout << "      STUDENT OPPORTUNITY HUB\n";
        cout << "==================================\n";
        cout << "1. Add Opportunity\n";
        cout << "2. View Opportunities\n";
        cout << "3. Search Opportunity\n";
        cout << "4. Delete Opportunity\n";
        cout << "5. Filter By Category\n";
        cout << "6. Sort By Name\n";
        cout << "7. Total Opportunities\n";
        cout << "8. Save Data\n";
        cout << "9. Exit\n";
        cout << "Enter Choice: ";

        cin >> choice;

        switch (choice)
        {
        case 1:
            manager.addOpportunity();
            break;

        case 2:
            manager.viewOpportunities();
            break;

        case 3:
            manager.searchOpportunity();
            break;

        case 4:
            manager.deleteOpportunity();
            break;

        case 5:
            manager.filterByCategory();
            break;

        case 6:
            manager.sortByName();
            break;

        case 7:
            manager.totalOpportunities();
            break;

        case 8:
            manager.saveToFile();
            break;

        case 9:
            manager.saveToFile();
            cout << "\nExiting...\n";
            break;

        default:
            cout << "\nInvalid Choice.\n";
        }

    } while (choice != 9);

    return 0;
}
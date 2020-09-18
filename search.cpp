#include "search.h"



Search::Search()
{
    data.resize(0);
    count = 0;
}

Search::~Search()
{
    
}

void Search::print()
{
    for (int i = 0; i < data.size(); i++) // goes through the whole vector and prints everything out.
    {
        cout << data[i] << " "; // puts a space between everything
    }
        cout << endl << endl << endl;
}

void Search::read()
{
    string filename = " "; 
    //cout <<  "Enter name of input file (please include file extension): " << endl ;
    //cin >> filename; //gets filename
    
    ifstream input;
    //input.open (filename); 
    input.open ("file.txt"); 
    if (!input.is_open()) 
    {
        cout << "Error, couldn't read file. " << endl;
    }

    string inputWord = " ";


    while (input >> inputWord) // this loop reads one word at a time as long as there are words to read
    {
        for (int i = 0; i < inputWord.length(); i++) //imbedded loop to read words one letter at a time
        {
            inputWord[i] = tolower(inputWord[i]);     // turns all letters to lower case
            
            if ((inputWord[i] == '.') || (inputWord[i] == ',') || (inputWord[i] == ')') || (inputWord[i] == '(') || (inputWord[i] == '!') || (inputWord[i] == '?') || (inputWord[i] == ';') || (inputWord[i] == '*') || (inputWord[i] == '"') || (inputWord[i] == ':')|| (inputWord[i] == ']') || (inputWord[i] == '-'))
            {                                                               // removes unnessary charaters (cleaning)
                inputWord.erase (inputWord.begin()+i);
                i--;
            }
        }
        data.push_back(inputWord);
        count++;
    }
    input.close(); //closes file to prevent leaks or something
}

void Search::sortWords()
{
    string temp = " ";
    char copy[data.size()];
    for (int i = 0; i < data.size(); i++) // this loop make a copy of the orginal data
    {
        temp = data[i];
        copy[i] = temp[0];
        //cout << data[i] << copy[i] << endl;
    }
    
    string dataCopy[data.size()];
    for (int i = 0; i < data.size(); i++) // this loop make a copy of the orginal data
    {
        temp = data[i];
        dataCopy[i] = temp;
    }
    
    string vectors[25];
    for (int i = 0; i < count; i++)
    {
        if(copy[i] == 'a')
        a.push_back(data[i]);
        else if(copy[i] == 'b')
        b.push_back(data[i]);
        else if(copy[i] == 'c')
        c.push_back(data[i]);
        else if(copy[i] == 'd')
        d.push_back(data[i]);
        else if(copy[i] == 'e')
        e.push_back(data[i]);
        else if(copy[i] == 'f')
        f.push_back(data[i]);
        else if(copy[i] == 'g')
        g.push_back(data[i]);
        else if(copy[i] == 'h')
        h.push_back(data[i]);
        else if(copy[i] == 'i')
        eye.push_back(data[i]);
        else if(copy[i] == 'j')
        j.push_back(data[i]);
        else if(copy[i] == 'k')
        k.push_back(data[i]);
        else if(copy[i] == 'l')
        l.push_back(data[i]);
        else if(copy[i] == 'm')
        m.push_back(data[i]);
        else if(copy[i] == 'n')
        n.push_back(data[i]);
        else if(copy[i] == 'o')
        o.push_back(data[i]);
        else if(copy[i] == 'p')
        p.push_back(data[i]);
        else if(copy[i] == 'q')
        q.push_back(data[i]);
        else if(copy[i] == 'r')
        r.push_back(data[i]);
        else if(copy[i] == 's')
        s.push_back(data[i]);
        else if(copy[i] == 't')
        t.push_back(data[i]);
        else if(copy[i] == 'u')
        u.push_back(data[i]);
        else if(copy[i] == 'v')
        v.push_back(data[i]);
        else if(copy[i] == 'w')
        w.push_back(data[i]);
        else if(copy[i] == 'x')
        x.push_back(data[i]);
        else if(copy[i] == 'y')
        y.push_back(data[i]);
        else if(copy[i] == 'z')
        z.push_back(data[i]);
    }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());
        sort(d.begin(), d.end());
        sort(f.begin(), f.end());
        sort(g.begin(), g.end());
        sort(h.begin(), h.end());
        sort(eye.begin(), eye.end());
        sort(j.begin(), j.end());
        sort(k.begin(), k.end());
        sort(l.begin(), l.end());
        sort(m.begin(), m.end());
        sort(n.begin(), n.end());
        sort(o.begin(), o.end());
        sort(p.begin(), p.end());
        sort(q.begin(), q.end());
        sort(r.begin(), r.end());
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        sort(u.begin(), u.end());
        sort(v.begin(), v.end());
        sort(w.begin(), w.end());
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        sort(z.begin(), z.end());
        
        data.clear();
        data.insert (data.begin(), a.begin(), a.end());
        data.insert (data.end(), b.begin(), b.end());
        data.insert (data.end(), c.begin(), c.end());
        data.insert (data.end(), d.begin(), d.end());
        data.insert (data.end(), e.begin(), e.end());
        data.insert (data.end(), f.begin(), f.end());
        data.insert (data.end(), g.begin(), g.end());
        data.insert (data.end(), h.begin(), h.end());
        data.insert (data.end(), eye.begin(), eye.end());
        data.insert (data.end(), j.begin(), j.end());
        data.insert (data.end(), k.begin(), k.end());
        data.insert (data.end(), l.begin(), l.end());
        data.insert (data.end(), m.begin(), m.end());
        data.insert (data.end(), n.begin(), n.end());
        data.insert (data.end(), o.begin(), o.end());
        data.insert (data.end(), p.begin(), p.end());
        data.insert (data.end(), q.begin(), q.end());
        data.insert (data.end(), r.begin(), r.end());
        data.insert (data.end(), s.begin(), s.end());
        data.insert (data.end(), t.begin(), t.end());
        data.insert (data.end(), u.begin(), u.end());
        data.insert (data.end(), v.begin(), v.end());
        data.insert (data.end(), w.begin(), w.end());
        data.insert (data.end(), x.begin(), x.end());
        data.insert (data.end(), y.begin(), y.end());
        data.insert (data.end(), z.begin(), z.end());
}



int Search::wordFreq()
{
    ofstream output;
    output.open ("book.count"); 
int count = 0;
for (int i = 0; i < data.size(); i++)
{
    if (data[i] == data[i+1])
    {
        count++;
    }
    else 
    {
        output << count << "  " << data[i] << endl;
        words.push_back (data[i]);
        numbers.push_back (count);
        count = 1;
    }
}
    output.close();
}

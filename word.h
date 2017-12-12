#ifndef WORD_H
#define WORD_H
#include<vector>
#include<string>

class Word
{
public:
   Word(std::string  word);
   void add_line(int line);
   void add_count(int count);
   void print() const;
private:
   int m_count;
   std::string m_word;
   std::vector<int> m_line;
};

#endif


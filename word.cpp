#include "word.h"

Word::Word(std::string  word)
{
   m_word = word;
   m_count = 1;
}

void Word::add_count(int count)
{
   m_count++;
}

void Word::add_line(int line)
{
   m_line.push_back(line);
}

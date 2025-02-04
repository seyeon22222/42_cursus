#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <string>
# include <utility>
# include <vector>

class BitcoinExchange
{
private:
	std::map<std::string, float> val;
public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& obj);
	BitcoinExchange &operator=(const BitcoinExchange& obj);
	~BitcoinExchange();
	void check_csv();
	void check_input(char *file);
	bool check_date(std::string);
	bool check_val(std::string);
	void initialize(char *file);
	void execute(char *file);
	void checkInfo(std::string);
	void printData(std::string, float);
	class BitError : public std::exception
	{
		public:
			const char * what(void) const throw();
	};
};


#endif
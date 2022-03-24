#include "Account.h"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit){
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _nbAccounts++;
    _totalAmount = _totalAmount + _amount;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::Account(void){}

Account::~Account(void){
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int Account::getNbAccounts(void){
    return(_nbAccounts);
}

int Account::getTotalAmount(void){
    return(_totalAmount);
}

int Account::getNbDeposits(void){
    return(_totalNbDeposits);
}

int Account::getNbWithdrawals(void){
    return(_totalNbWithdrawals);
}

int Account::checkAmount(void) const{
    return(_amount);
}

void Account::displayAccountsInfos(void){
    _displayTimestamp();
    std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" 
        << _totalNbDeposits << ";widthdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void){
    time_t timer;

    timer =  time(NULL);
    struct tm* t = localtime(&timer);
    std::cout << "[" << t->tm_year + 1900 << std::setfill('0') << std::setw(2) << t->tm_mon << std::setfill('0') << std::setw(2) 
        << t->tm_mday << "_" << std::setfill('0') << std::setw(2) << t->tm_hour << std::setfill('0') << std::setw(2) << t->tm_min
        << std::setfill('0') << std::setw(2) << t->tm_sec << "]";
 }

void Account::displayStatus(void) const{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit){
    int p_amount;
    p_amount = _amount;
    _amount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount << ";deposit" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int w){
    int p_amount;

    p_amount = _amount;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount;
    if (_amount < w) {
        std::cout << ";withdrawal:refused" << std::endl;
        return(false);
    }
    _amount -= w;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _totalAmount -= w;
    std::cout << ";withdrawal:" << w << ";amount:" << _amount << ";nb_withdrawal:" << _nbWithdrawals << std::endl;
    return (true);
}
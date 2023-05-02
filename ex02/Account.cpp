/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivautrav <ivautrav@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 08:50:03 by ivautrav          #+#    #+#             */
/*   Updated: 2023/05/02 18:29:58 by ivautrav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_totalNbWithdrawals = 0;
	this->_totalNbDeposits = 0;
}

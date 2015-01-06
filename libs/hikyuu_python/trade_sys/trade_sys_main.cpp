/*
 * trade_sys_main.cpp
 *
 *  Created on: 2013-3-2
 *      Author: fasiondog
 */

#include <boost/python.hpp>

using namespace boost::python;

void export_Environment();
void export_Condition();
void export_MoneyManager();
void export_Signal();
void export_Stoploss();
void export_ProfitGoal();
void export_Slippage();
void export_System();

BOOST_PYTHON_MODULE(_trade_sys) {
    export_Environment();
    export_Condition();
    export_MoneyManager();
    export_Signal();
    export_Stoploss();
    export_ProfitGoal();
    export_Slippage();
    export_System();
}



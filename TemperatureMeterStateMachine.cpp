/*----- PROTECTED REGION ID(TemperatureMeterStateMachine.cpp) ENABLED START -----*/
static const char *RcsId = "$Id:  $";
//=============================================================================
//
// file :        TemperatureMeterStateMachine.cpp
//
// description : State machine file for the TemperatureMeter class
//
// project :     Temperature Meter
//
// This file is part of Tango device class.
// 
// Tango is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Tango is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with Tango.  If not, see <http://www.gnu.org/licenses/>.
// 
// $Author:  $
//
// $Revision:  $
// $Date:  $
//
// $HeadURL:  $
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================

#include <TemperatureMeter.h>

/*----- PROTECTED REGION END -----*/	//	TemperatureMeter::TemperatureMeterStateMachine.cpp

//================================================================
//  States  |  Description
//================================================================
//  OFF     |  
//  ON      |  


namespace TemperatureMeter_ns
{
//=================================================
//		Attributes Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : TemperatureMeter::is_temperature_allowed()
 *	Description : Execution allowed for temperature attribute
 */
//--------------------------------------------------------
bool TemperatureMeter::is_temperature_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Check access type.
	if ( type==Tango::READ_REQ )
	{
		//	Compare device state with not allowed states for READ 
		if (get_state()==Tango::OFF)
		{
		/*----- PROTECTED REGION ID(TemperatureMeter::temperatureStateAllowed_READ) ENABLED START -----*/
		
		/*----- PROTECTED REGION END -----*/	//	TemperatureMeter::temperatureStateAllowed_READ
			return false;
		}
		return true;
	}
	return true;
}

//=================================================
//		Commands Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : TemperatureMeter::is_Start_allowed()
 *	Description : Execution allowed for Start attribute
 */
//--------------------------------------------------------
bool TemperatureMeter::is_Start_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Compare device state with not allowed states.
	if (get_state()==Tango::ON)
	{
	/*----- PROTECTED REGION ID(TemperatureMeter::StartStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	TemperatureMeter::StartStateAllowed
		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : TemperatureMeter::is_Stop_allowed()
 *	Description : Execution allowed for Stop attribute
 */
//--------------------------------------------------------
bool TemperatureMeter::is_Stop_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Compare device state with not allowed states.
	if (get_state()==Tango::OFF)
	{
	/*----- PROTECTED REGION ID(TemperatureMeter::StopStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	TemperatureMeter::StopStateAllowed
		return false;
	}
	return true;
}

}	//	End of namespace

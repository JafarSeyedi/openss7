/*
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *
 *  Copyrights:
 *
 *  Copyright - 1999 Sun Microsystems, Inc. All rights reserved.
 *  901 San Antonio Road, Palo Alto, California 94043, U.S.A.
 *
 *  This product and related documentation are protected by copyright and
 *  distributed under licenses restricting its use, copying, distribution, and
 *  decompilation. No part of this product or related documentation may be
 *  reproduced in any form by any means without prior written authorization of
 *  Sun and its licensors, if any.
 *
 *  RESTRICTED RIGHTS LEGEND: Use, duplication, or disclosure by the United
 *  States Government is subject to the restrictions set forth in DFARS
 *  252.227-7013 (c)(1)(ii) and FAR 52.227-19.
 *
 *  The product described in this manual may be protected by one or more U.S.
 *  patents, foreign patents, or pending applications.
 *
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *
 *  Author:
 *
 *  Mahindra British Telecom
 *  155 , Bombay - Pune Road 
 *  Pimpri ,
 *  Pune - 411 018.
 *
 *  Module Name   : JAIN INAP API
 *  File Name     : AssistRequestInstructions.java
 *  Approver      : Jain Inap Edit Group
 *  Version       : 1.0
 *
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */


package javax.jain.ss7.inap.operation;

import java.io.*;
import java.util.*;
import javax.jain.ss7.inap.datatype.*;
import javax.jain.ss7.inap.constants.*;
import javax.jain.*;


/**
This class represents the AssistRequestInstructions Operation.
*/

public class AssistRequestInstructions  extends Operation implements java.io.Serializable
{
    

    private DigitsGenericNumber correlationID;
    
    private java.lang.String iPAvailable;
    private boolean isIPAvailable = false ;
    
    private java.lang.String iPSSPCapabilities;
    private boolean isIPSSPCapabilities = false ;
    
    private ExtensionField extensions[];
    private boolean isExtensions = false ; 
    
/**
Constructor For AssistRequestInstructions
*/
	public AssistRequestInstructions(DigitsGenericNumber correlationID)
	{
		operationCode = OperationCode.ASSIST_REQUEST_INSTRUCTIONS;
		setCorrelationID(correlationID);
	}

//---------------------------------------    

/**
Gets Operation Code
*/
    public OperationCode getOperationCode() 
    {
        return operationCode;
    }

//-----------------------


/**
Gets CorrelationID
*/
    public DigitsGenericNumber getCorrelationID() 
    {
        return correlationID;
    }
/**
Sets CorrelationID
*/
    public void setCorrelationID(DigitsGenericNumber correlationID)
    {
        this.correlationID = correlationID;
    }

//-----------------------

/**
Gets IP Available */
    public java.lang.String getIPAvailable() throws ParameterNotSetException
    {
       if(isIPAvailablePresent())
           return iPAvailable;
       else
         throw new ParameterNotSetException();
    }
/**
Sets IP Available
*/
    public void setIPAvailable(java.lang.String iPAvailable)
    {
        this.iPAvailable = iPAvailable;
        isIPAvailable = true;
    }
/**
Indicates if the IP Available optional parameter is present .
Returns: TRUE if present, FALSE otherwise.
*/
    public boolean isIPAvailablePresent()
    {
        return isIPAvailable;
    }

//-----------------------

/**
Gets IP SSP Capabilities
*/
    public java.lang.String getIPSSPCapabilities() throws ParameterNotSetException
    {
       if(isIPSSPCapabilitiesPresent())
            return iPSSPCapabilities;
       else
         throw new ParameterNotSetException();

    }
/**
Sets IP SSP Capabilities
*/
    public void setIPSSPCapabilities(java.lang.String iPSSPCapabilities)
    {
        this.iPSSPCapabilities = iPSSPCapabilities;
        isIPSSPCapabilities = true;
    }
/**
Indicates if the IP SSP Capabilities optional parameter is present .
Returns: TRUE if present, FALSE otherwise.
*/
    public boolean isIPSSPCapabilitiesPresent()
    {
        return isIPSSPCapabilities;
    }

//-----------------------



/**
Gets Extensions Parameter
*/

    public ExtensionField[] getExtensions() throws ParameterNotSetException
    {
       if(isExtensionsPresent())
              return extensions;
       else
         throw new ParameterNotSetException();

    }

/**
Gets a particular  Extension Parameter
*/

    public ExtensionField getExtension(int index) 
    {
        return extensions[index];
    }

/**
Sets Extensions Parameter
*/

    public void  setExtensions (ExtensionField extensions[])
    {
        this.extensions = extensions ;
        isExtensions = true; 
    }

/**
Sets a particular Extensions Parameter
*/

    public void  setExtension (int index , ExtensionField extension)
    {
        this.extensions[index] = extension ;
    }

/**
Indicates if the Extensions optional parameter is present .
Returns: TRUE if present, FALSE otherwise.
*/
    public boolean isExtensionsPresent()
    {
        return isExtensions;
    }
    
//-----------------------


}
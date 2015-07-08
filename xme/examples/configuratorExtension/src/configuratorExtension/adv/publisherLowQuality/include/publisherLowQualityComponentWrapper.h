/*
 * Copyright (c) 2011-2014, fortiss GmbH.
 * Licensed under the Apache License, Version 2.0.
 *
 * Use, modification and distribution are subject to the terms specified
 * in the accompanying license file LICENSE.txt located at the root directory
 * of this software distribution. A copy is available at
 * http://chromosome.fortiss.org/.
 *
 * This file is part of CHROMOSOME.
 *
 * $Id: publisherLowQualityComponentWrapper.h 7836 2014-03-14 12:20:24Z wiesmueller $
 */

/**
 * \file
 *         Component wrapper - implements interface of a component
 *              to the data handler
 *
 * \author
 *         This file has been generated by the CHROMOSOME Modeling Tool (XMT)
 *         (fortiss GmbH).
 */

#ifndef CONFIGURATOREXTENSION_ADV_PUBLISHERLOWQUALITY_PUBLISHERLOWQUALITYCOMPONENTWRAPPER_H
#define CONFIGURATOREXTENSION_ADV_PUBLISHERLOWQUALITY_PUBLISHERLOWQUALITYCOMPONENTWRAPPER_H

/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include "xme/core/executionManager/include/executionManagerDataStructures.h"

#include "configuratorExtension/topic/dictionaryData.h"

/******************************************************************************/
/***   Type definitions                                                     ***/
/******************************************************************************/

/**
 * \enum configuratorExtension_adv_publisherLowQuality_publisherLowQualityComponentWrapper_internalFunctionId_e
 *
 * \brief Values for identifying functions of publisherLowQuality component.
 */
enum configuratorExtension_adv_publisherLowQuality_publisherLowQualityComponentWrapper_internalFunctionId_e
{
    CONFIGURATOREXTENSION_ADV_PUBLISHERLOWQUALITY_PUBLISHERLOWQUALITYCOMPONENTWRAPPER_FUNCTION_SEND = 0  ///< Function 'send'
};

/**
 * \enum configuratorExtension_adv_publisherLowQuality_publisherLowQualityComponentWrapper_internalPortId_e
 *
 * \brief Values for configuratorExtension_adv_publisherLowQuality_publisherLowQualityComponentWrapper_internalPortId_t.
 */
enum configuratorExtension_adv_publisherLowQuality_publisherLowQualityComponentWrapper_internalPortId_e
{
    CONFIGURATOREXTENSION_ADV_PUBLISHERLOWQUALITY_PUBLISHERLOWQUALITYCOMPONENTWRAPPER_PORT_OUT = 0  ///< Port 'out'
};

/**
 * \typedef configuratorExtension_adv_publisherLowQuality_publisherLowQualityComponentWrapper_internalPortId_t
 *
 * \brief Defines internal port ids of component 'publisherLowQuality'.
 *
 * \details These can be used when calling the configuratorExtension_adv_publisherLowQuality_publisherLowQualityComponentWrapper_receivePort function.
 *          For the definition of possible values, see enum configuratorExtension_adv_publisherLowQuality_publisherLowQualityComponentWrapper_internalPortId_e.
 */
typedef uint8_t configuratorExtension_adv_publisherLowQuality_publisherLowQualityComponentWrapper_internalPortId_t;

/******************************************************************************/
/***   Prototypes                                                           ***/
/******************************************************************************/
XME_EXTERN_C_BEGIN

/**
 * \brief Initializes this component wrapper.
 *
 * \retval XME_STATUS_SUCCESS on success.
 */
xme_status_t
configuratorExtension_adv_publisherLowQuality_publisherLowQualityComponentWrapper_init(void);

/**
 * \brief Finalizes this component wrapper.
 */
void
configuratorExtension_adv_publisherLowQuality_publisherLowQualityComponentWrapper_fini(void);

/**
 * \brief Associate an internal port number with the corresponding port handle.
 *        For the ids of the individual ports, see the definition of configuratorExtension_adv_publisherLowQuality_publisherLowQualityComponentWrapper_internalPortId_t.
 *
 * \param dataPacketId Port handle from the dataHandler.
 * \param componentInternalPortId Component internal port number of the above port.
 *
 * \retval XME_STATUS_SUCCESS if no problems occurred.
 * \retval XME_STATUS_INVALID_PARAMETER if componentInternalPortId is unknown.
 */
xme_status_t
configuratorExtension_adv_publisherLowQuality_publisherLowQualityComponentWrapper_receivePort
(
    xme_core_dataManager_dataPacketId_t dataPacketId,
    configuratorExtension_adv_publisherLowQuality_publisherLowQualityComponentWrapper_internalPortId_t componentInternalPortId
);

/**
 * \brief This function is called by the function wrapper after the step
 *        function has been called. It signals to the middleware that all
 *        write operations on ports that actually have been written to
 *        in the step function (via the functions in this component wrapper)
 *        are now completed.
 */
void
configuratorExtension_adv_publisherLowQuality_publisherLowQualityComponentWrapper_completeWriteOperations(void);

/**
 * \brief Write data to port 'out'.
 *
 * \note The write operation is only allowed to be called once per
 *       data packet sending process. A data packet is sent 
 *       as soon as the configuratorExtension_adv_publisherLowQuality_publisherLowQualityComponentWrapper_writeNextPacket()
 *       function is being called or when the step function
 *       returns and data have been written.
 * 
 * \param[in] data User provided storage, from which the data is copied.
 *            When NULL no data will be written to the port (this
 *            is also treated as  success).
 *
 * \retval XME_STATUS_SUCCESS if operation was successful.
 */
xme_status_t
configuratorExtension_adv_publisherLowQuality_publisherLowQualityComponentWrapper_writePortOut
(
    const configuratorExtension_topic_data_t* const data
);

xme_status_t
configuratorExtension_adv_publisherLowQuality_publisherLowQualityComponentWrapper_writeOutputPortAttribute
(
    configuratorExtension_adv_publisherLowQuality_publisherLowQualityComponentWrapper_internalPortId_t portId,
    xme_core_attribute_key_t attributeKey,
    const void* const buffer,
    uint32_t bufferSize
);

xme_status_t
configuratorExtension_adv_publisherLowQuality_publisherLowQualityComponentWrapper_writeNextPacket
(
    configuratorExtension_adv_publisherLowQuality_publisherLowQualityComponentWrapper_internalPortId_t portId
);


XME_EXTERN_C_END

#endif // #ifndef CONFIGURATOREXTENSION_ADV_PUBLISHERLOWQUALITY_PUBLISHERLOWQUALITYCOMPONENTWRAPPER_H
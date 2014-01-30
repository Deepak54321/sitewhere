/*
 * DeviceCommandInvocation.java 
 * --------------------------------------------------------------------------------------
 * Copyright (c) Reveal Technologies, LLC. All rights reserved. http://www.reveal-tech.com
 *
 * The software in this package is published under the terms of the CPAL v1.0
 * license, a copy of which has been included with this distribution in the
 * LICENSE.txt file.
 */
package com.sitewhere.rest.model.device.event;

import java.util.HashMap;
import java.util.Map;

import com.fasterxml.jackson.annotation.JsonIgnoreProperties;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonInclude.Include;
import com.sitewhere.spi.device.event.CommandInitiator;
import com.sitewhere.spi.device.event.CommandStatus;
import com.sitewhere.spi.device.event.CommandTarget;
import com.sitewhere.spi.device.event.IDeviceCommandInvocation;

/**
 * Implementation of {@link IDeviceCommandInvocation}.
 * 
 * @author Derek
 */
@JsonIgnoreProperties
@JsonInclude(Include.NON_NULL)
public class DeviceCommandInvocation extends DeviceEvent implements IDeviceCommandInvocation {

	/** For Java serialization */
	private static final long serialVersionUID = -7389600825785131041L;

	/** Type of actor that initiated the command */
	private CommandInitiator initiator;

	/** Id of actor that initiated the command */
	private String initiatorId;

	/** Type of actor that will receive the command */
	private CommandTarget target;

	/** Id of actor that will receive the command */
	private String targetId;

	/** Unique token of command to execute */
	private String commandToken;

	/** Values to use for command parameters */
	private Map<String, String> parameterValues = new HashMap<String, String>();

	/** Current invocation status */
	private CommandStatus status;

	/*
	 * (non-Javadoc)
	 * 
	 * @see com.sitewhere.spi.device.event.IDeviceCommandInvocation#getInitiator()
	 */
	public CommandInitiator getInitiator() {
		return initiator;
	}

	public void setInitiator(CommandInitiator initiator) {
		this.initiator = initiator;
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see com.sitewhere.spi.device.event.IDeviceCommandInvocation#getInitiatorId()
	 */
	public String getInitiatorId() {
		return initiatorId;
	}

	public void setInitiatorId(String initiatorId) {
		this.initiatorId = initiatorId;
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see com.sitewhere.spi.device.event.IDeviceCommandInvocation#getTarget()
	 */
	public CommandTarget getTarget() {
		return target;
	}

	public void setTarget(CommandTarget target) {
		this.target = target;
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see com.sitewhere.spi.device.event.IDeviceCommandInvocation#getTargetId()
	 */
	public String getTargetId() {
		return targetId;
	}

	public void setTargetId(String targetId) {
		this.targetId = targetId;
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see com.sitewhere.spi.device.event.IDeviceCommandInvocation#getCommandToken()
	 */
	public String getCommandToken() {
		return commandToken;
	}

	public void setCommandToken(String commandToken) {
		this.commandToken = commandToken;
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see com.sitewhere.spi.device.event.IDeviceCommandInvocation#getParameterValues()
	 */
	public Map<String, String> getParameterValues() {
		return parameterValues;
	}

	public void setParameterValues(Map<String, String> parameterValues) {
		this.parameterValues = parameterValues;
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see com.sitewhere.spi.device.event.IDeviceCommandInvocation#getStatus()
	 */
	public CommandStatus getStatus() {
		return status;
	}

	public void setStatus(CommandStatus status) {
		this.status = status;
	}

	/**
	 * Create a copy of an SPI object. Used by web services for marshaling.
	 * 
	 * @param input
	 * @return
	 */
	public static DeviceCommandInvocation copy(IDeviceCommandInvocation input) {
		DeviceCommandInvocation result = new DeviceCommandInvocation();
		DeviceEvent.copy(input, result);
		result.setInitiator(input.getInitiator());
		result.setInitiatorId(input.getInitiatorId());
		result.setTarget(input.getTarget());
		result.setTargetId(input.getTargetId());
		result.setCommandToken(input.getCommandToken());
		result.setStatus(input.getStatus());
		result.setParameterValues(input.getParameterValues());
		return result;
	}
}
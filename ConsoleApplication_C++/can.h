
#pragma once

constexpr uint16_t ID = 0x321;


/*
class can_msg
{
public:
    void can_msg(uint32_t TransmitRate, uint32_t DLC, uint32_t IDtype, uint32_t ID, uint32_t DataFrame)
    {
        TxHeader.DLC = DLC;
        TxHeader.IDE = IDtype;
        TxHeader.StdId = ID;
        TxHeader.RTR = DataFrame;
        this->TransmitRate = TransmitRate;
    }

    const CAN_TxHeaderTypeDef* getTxHeader() const { return &this->TxHeader; }
    virtual void const uint8_t* getTxData() const { return TxData; }          // Zum Schreiben/Lesen 
    // virtual void fillTxData() {};
private:

    CAN_TxHeaderTypeDef TxHeader;
    uint32_t TransmitRate;
    uint8_t TxData[8] = { 0 };
    uint32_t TxMailbox;

};

// HVESSC1_PGN_6912     20 mS

class can_msg_HVESSC1_PGN_6912 : can_msg
{
public:

    void void const uint8_t* getTxData() const {

        TxData[0] = (HS_HiUBusCnctCmd_Rx1) | (HS_PwrDwnCmd_Rx1 << 2) | (HS_HiUBusAcvIslnTestCmd_Rx1 << 4) | (HS_HiUBusPasIslnTestCmd_Rx1 << 6);
        TxData[1] = (HS_CellBalnCmd_Rx1) | (HS_EnaIntChrgrCmd_Rx1 << 2) | (HS_OperConsent_Rx1 << 4) | (HS_HiUBusHiSideRestrCnctReq_Rx1 << 6);
        TxData[2] : = HS_HiUBusLoSideRestrCnctReq_Rx1;
        TxData[3] : = 0;
        TxData[4] : = 0;
        TxData[5] : = 0;
        TxData[6] : = 0; // HS_Ctl1Ctr_Rx1;
        TxData[7] : = 0; // HS_Ctl1CRC_Rx1;

        return TxData;
    }




    void SetHS_HiUBusCnctCmd_Rx1(uint8_t HS_HiUBusCnctCmd_Rx1) { this->HS_HiUBusCnctCmd_Rx1 = HS_HiUBusCnctCmd_Rx1; }
    void SetHS_PwrDwnCmd_Rx1(uint8_t HS_PwrDwnCmd_Rx1) { this->HS_PwrDwnCmd_Rx1 = HS_PwrDwnCmd_Rx1; }
    void SetHS_HiUBusAcvIslnTestCmd_Rx1(uint8_t HS_HiUBusAcvIslnTestCmd_Rx1) { this->HS_HiUBusAcvIslnTestCmd_Rx1 = HS_HiUBusAcvIslnTestCmd_Rx1; }
    void SetHS_HiUBusPasIslnTestCmd_Rx1(uint8_t HS_HiUBusPasIslnTestCmd_Rx1) { this->HS_HiUBusPasIslnTestCmd_Rx1 = HS_HiUBusPasIslnTestCmd_Rx1; }
    void SetHS_CellBalnCmd_Rx1(uint8_t HS_CellBalnCmd_Rx1) { this->HS_CellBalnCmd_Rx1 = HS_CellBalnCmd_Rx1; }
    void SetHS_EnaIntChrgrCmd_Rx1(uint8_t HS_EnaIntChrgrCmd_Rx1) { this->HS_EnaIntChrgrCmd_Rx1 = HS_EnaIntChrgrCmd_Rx1; }
    void SetHS_OperConsent_Rx1(uint8_t HS_OperConsent_Rx1) { this->HS_OperConsent_Rx1 = HS_OperConsent_Rx1; }
    void SetHS_HiUBusHiSideRestrCnctReq_Rx1(uint8_t HS_HiUBusHiSideRestrCnctReq_Rx1) { this->HS_HiUBusHiSideRestrCnctReq_Rx1 = HS_HiUBusHiSideRestrCnctReq_Rx1; }

private:
    uint8_t TxData[8] = { 0 };

    // Variablen
    uint8_t HS_HiUBusCnctCmd_Rx1;			     	// Command to connect the High Voltage Energy Storage System (or Pack 1 in systems with only one pack) to the high-voltage bus.  The emergency contactor closure request may be used in situations where one or more faults in the hybrid powertrain prevent norm
    uint8_t HS_PwrDwnCmd_Rx1;						// Command to shut down the High Voltage Energy Storage System (or Pack 1 in systems with only one pack).  A normal power-down may involve steps that take some period of time (tests, writing of data, etc.).  However, an emergency power-down should shut down
    uint8_t HS_HiUBusAcvIslnTestCmd_Rx1;     		// Command for the High Voltage Energy Storage System (or Pack 1 in systems with only one pack) to perform an active electrical isolation test on the high voltage bus.An active isolation test might use a generated signal (e.g. an injected AC signal) and
    uint8_t HS_HiUBusPasIslnTestCmd_Rx1;	 		// Command for the High Voltage Energy Storage System (or Pack 1 in systems with only one pack) to perform a passive electrical isolation test on the high voltage bus.A passive isolation test uses additional circuitry (e.g. a high impedance network) to
    uint8_t HS_CellBalnCmd_Rx1; 				 	// Command for the High Voltage Energy Storage System (or Pack 1 in systems with only one pack) to perform cell balancing.This parameter provides HVES system level information. If there are multiple packs in the system, then both individual pack message
    uint8_t HS_EnaIntChrgrCmd_Rx1;			 	    // When the HVES has an internal charger this parameter will enable it.   External chargers may use the External Energy Source Connection Demand (SPN 7890) and related SPs.This parameter provides HVES system level information. If there are multiple pack
    uint8_t HS_OperConsent_Rx1;				 	    // This parameter provides an indication to the High Voltage Energy Storage System (or Pack 1 in systems with only one pack) that an external device is ready for this HVES instance to proceed with normal operation.  In applications which support this parame
    uint8_t HS_HiUBusHiSideRestrCnctReq_Rx1;        // // This parameter is used to request connection of this HVES instance High-Voltage bus high side resistor in order to perform an isolation test.  See also SPN 8434  (HVESS High-Voltage Bus Low Side Resistor Connect Request).This parameter provides HVES



};*/
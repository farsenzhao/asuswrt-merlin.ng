/*
 * Note: this file originally auto-generated by mib2c using
 *        : mib2c.old-api.conf 14476 2006-04-18 17:36:51Z hardaker $
 */
#ifndef PARENTALCONTROL_H
#define PARENTALCONTROL_H

/* function declarations */
void init_parentalControl(void);
FindVarMethod var_parentalControl;
FindVarMethod var_pControlScanTable;
FindVarMethod var_pControlClientTable;
    WriteMethod write_pControlEnable;
    WriteMethod write_pControlScanClients;
    WriteMethod write_pControlEntryEnable;
    WriteMethod write_pControlClientName;
    WriteMethod write_pControlClientMac;
    WriteMethod write_pControlSunAllowTime;
    WriteMethod write_pControlMonAllowTime;
    WriteMethod write_pControlTueAllowTime;
    WriteMethod write_pControlWedAllowTime;
    WriteMethod write_pControlThuAllowTime;
    WriteMethod write_pControlFriAllowTime;
    WriteMethod write_pControlSatAllowTime;
    WriteMethod write_pControlClientDelEntry;

#endif /* PARENTALCONTROL_H */

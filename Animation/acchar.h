#if !defined(AFX_AGENTCTLCHARACTEREX_H__AB8FEBA5_3841_11D2_8512_00C04FA34A14__INCLUDED_)
#define AFX_AGENTCTLCHARACTEREX_H__AB8FEBA5_3841_11D2_8512_00C04FA34A14__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CAgentCtlBalloonEx;
class CAgentCtlCommandsEx;
class CAgentCtlRequest;
class CAgentCtlAnimationNames;

/////////////////////////////////////////////////////////////////////////////
// CAgentCtlCharacterEx wrapper class

class CAgentCtlCharacterEx : public COleDispatchDriver
{
public:
	CAgentCtlCharacterEx() {}		// Calls COleDispatchDriver default constructor
	CAgentCtlCharacterEx(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CAgentCtlCharacterEx(const CAgentCtlCharacterEx& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CAgentCtlBalloonEx GetBalloon();
	CAgentCtlCommandsEx GetCommands();
	CString GetName();
	CString GetDescription();
	BOOL GetVisible();
	void SetLeft(short nNewValue);
	short GetLeft();
	void SetTop(short nNewValue);
	short GetTop();
	void SetHeight(short nNewValue);
	short GetHeight();
	void SetWidth(short nNewValue);
	short GetWidth();
	long GetSpeed();
	long GetPitch();
	void SetIdleOn(BOOL bNewValue);
	BOOL GetIdleOn();
	BOOL Activate(const VARIANT& State);
	CAgentCtlRequest Play(LPCTSTR Animation);
	CAgentCtlRequest Get(LPCTSTR Type, LPCTSTR Name, const VARIANT& Queue);
	void Stop(const VARIANT& Request);
	CAgentCtlRequest Wait(LPDISPATCH WaitForRequest);
	CAgentCtlRequest Interrupt(LPDISPATCH InterruptRequest);
	CAgentCtlRequest Speak(const VARIANT& Text, const VARIANT& Url);
	CAgentCtlRequest GestureAt(short x, short y);
	CAgentCtlRequest MoveTo(short x, short y, const VARIANT& Speed);
	CAgentCtlRequest Hide(const VARIANT& Fast);
	CAgentCtlRequest Show(const VARIANT& Fast);
	void StopAll(const VARIANT& Types);
	short GetMoveCause();
	short GetVisibilityCause();
	BOOL GetHasOtherClients();
	void SetSoundEffectsOn(BOOL bNewValue);
	BOOL GetSoundEffectsOn();
	void SetName(LPCTSTR lpszNewValue);
	void SetDescription(LPCTSTR lpszNewValue);
	CString GetExtraData();
	void ShowPopupMenu(short x, short y);
	void SetAutoPopupMenu(BOOL bNewValue);
	BOOL GetAutoPopupMenu();
	void SetHelpModeOn(BOOL bNewValue);
	BOOL GetHelpModeOn();
	void SetHelpContextID(long nNewValue);
	long GetHelpContextID();
	short GetActive();
	BOOL Listen(BOOL Listen);
	void SetLanguageID(long nNewValue);
	long GetLanguageID();
	CString GetSRModeID();
	void SetSRModeID(LPCTSTR lpszNewValue);
	CString GetTTSModeID();
	void SetTTSModeID(LPCTSTR lpszNewValue);
	CString GetHelpFile();
	void SetHelpFile(LPCTSTR lpszNewValue);
	CString GetGuid();
	short GetOriginalHeight();
	short GetOriginalWidth();
	CAgentCtlRequest Think(LPCTSTR Text);
	CString GetVersion();
	CAgentCtlAnimationNames GetAnimationNames();
	long GetSRStatus();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_AGENTCTLCHARACTEREX_H__AB8FEBA5_3841_11D2_8512_00C04FA34A14__INCLUDED_)

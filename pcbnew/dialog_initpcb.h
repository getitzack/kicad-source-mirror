/////////////////////////////////////////////////////////////////////////////
// Name:        dialog_initpcb.h
// Purpose:     
// Author:      jean-pierre Charras
// Modified by: 
// Created:     15/02/2006 21:42:41
// RCS-ID:      
// Copyright:   License GNU
// Licence:     
/////////////////////////////////////////////////////////////////////////////

// Generated by DialogBlocks (unregistered), 15/02/2006 21:42:41

#ifndef _DIALOG_INITPCB_H_
#define _DIALOG_INITPCB_H_

/*!
 * Includes
 */

////@begin includes
////@end includes

/*!
 * Forward declarations
 */

////@begin forward declarations
////@end forward declarations

/*!
 * Control identifiers
 */

////@begin control identifiers
#define ID_DIALOG 10000
// #define SYMBOL_WINEDA_PCBGLOBALDELETEFRAME_STYLE wxCAPTION|wxRESIZE_BORDER|wxSYSTEM_MENU|wxCLOSE_BOX
#define SYMBOL_WINEDA_PCBGLOBALDELETEFRAME_STYLE wxCAPTION|wxSYSTEM_MENU|wxCLOSE_BOX
#define SYMBOL_WINEDA_PCBGLOBALDELETEFRAME_TITLE _("Global Delete")
#define SYMBOL_WINEDA_PCBGLOBALDELETEFRAME_IDNAME ID_DIALOG
#define SYMBOL_WINEDA_PCBGLOBALDELETEFRAME_SIZE wxSize(400, 300)
#define SYMBOL_WINEDA_PCBGLOBALDELETEFRAME_POSITION wxDefaultPosition
#define ID_CHECKBOX 10001
#define ID_CHECKBOX1 10002
#define ID_CHECKBOX2 10003
#define ID_CHECKBOX3 10004
#define ID_CHECKBOX4 10005
#define ID_CHECKBOX5 10006
#define ID_CHECKBOX6 10007
#define ID_CHECKBOX7 10008
#define ID_CHECKBOX8 10009
#define ID_CHECKBOX9 10010
////@end control identifiers

/*!
 * Compatibility
 */

#ifndef wxCLOSE_BOX
#define wxCLOSE_BOX 0x1000
#endif

/*!
 * WinEDA_PcbGlobalDeleteFrame class declaration
 */

class WinEDA_PcbGlobalDeleteFrame: public wxDialog
{    
    DECLARE_DYNAMIC_CLASS( WinEDA_PcbGlobalDeleteFrame )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    WinEDA_PcbGlobalDeleteFrame( );
    WinEDA_PcbGlobalDeleteFrame( WinEDA_PcbFrame* parent, wxWindowID id = SYMBOL_WINEDA_PCBGLOBALDELETEFRAME_IDNAME, const wxString& caption = SYMBOL_WINEDA_PCBGLOBALDELETEFRAME_TITLE, const wxPoint& pos = SYMBOL_WINEDA_PCBGLOBALDELETEFRAME_POSITION, const wxSize& size = SYMBOL_WINEDA_PCBGLOBALDELETEFRAME_SIZE, long style = SYMBOL_WINEDA_PCBGLOBALDELETEFRAME_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_WINEDA_PCBGLOBALDELETEFRAME_IDNAME, const wxString& caption = SYMBOL_WINEDA_PCBGLOBALDELETEFRAME_TITLE, const wxPoint& pos = SYMBOL_WINEDA_PCBGLOBALDELETEFRAME_POSITION, const wxSize& size = SYMBOL_WINEDA_PCBGLOBALDELETEFRAME_SIZE, long style = SYMBOL_WINEDA_PCBGLOBALDELETEFRAME_STYLE );

    /// Creates the controls and sizers
    void CreateControls();

////@begin WinEDA_PcbGlobalDeleteFrame event handler declarations

    /// wxEVT_COMMAND_BUTTON_CLICKED event handler for wxID_OK
    void OnOkClick( wxCommandEvent& event );

    /// wxEVT_COMMAND_BUTTON_CLICKED event handler for wxID_CANCEL
    void OnCancelClick( wxCommandEvent& event );

////@end WinEDA_PcbGlobalDeleteFrame event handler declarations

////@begin WinEDA_PcbGlobalDeleteFrame member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end WinEDA_PcbGlobalDeleteFrame member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();
	void AcceptPcbDelete(wxCommandEvent& event);

////@begin WinEDA_PcbGlobalDeleteFrame member variables
    wxCheckBox* m_DelZones;
    wxCheckBox* m_DelTexts;
    wxCheckBox* m_DelEdges;
    wxCheckBox* m_DelDrawings;
    wxCheckBox* m_DelModules;
    wxCheckBox* m_DelTracks;
    wxCheckBox* m_DelMarkers;
    wxCheckBox* m_DelAlls;
    wxCheckBox* m_TrackFilterAR;
    wxCheckBox* m_TrackFilterLocked;
////@end WinEDA_PcbGlobalDeleteFrame member variables

	WinEDA_PcbFrame * m_Parent;

};

#endif
    // _DIALOG_INITPCB_H_

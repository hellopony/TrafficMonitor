﻿#include "stdafx.h"
#include "Test.h"
#include "Common.h"
#include "SkinFile.h"

CTest::CTest()
{
}

CTest::~CTest()
{
}

void CTest::Test()
{
    //TestHttpQequest();
    //TestGetLicense();
    //TestSkin();
    //TestCrash();
}

void CTest::TestHttpQequest()
{
    wstring result;
    bool rtn = CCommon::GetURL(L"https://v4.yinghualuo.cn/bejson", result, true, L"TrafficMonitor_V1.78");
    int a = 0;
}

void CTest::TestGetLicense()
{
    CString license_str;
    HRSRC hRes = FindResource(NULL, MAKEINTRESOURCE(IDR_LICENSE), _T("TEXT"));
    if (hRes != NULL)
    {
        HGLOBAL hglobal = LoadResource(NULL, hRes);
        if (hglobal != NULL)
        {
            license_str = CCommon::StrToUnicode((const char*)hglobal, true).c_str();
            int a = 0;
        }
    }
}

void CTest::TestSkin()
{
    CSkinFile skin;
    //skin.Load(L"C:\\Users\\zhong\\OneDrive\\文档\\TrafficMonitorSkin.xml");
    skin.Load(L"D:\\Projects\\GitHub Project\\TrafficMonitor\\TrafficMonitor\\skins\\0默认皮肤\\skin.ini");
    int a = 0;
}

void CTest::TestCrash()
{
    CString* pStr = nullptr;
    int a = pStr->GetLength();
    printf("%d", a);

}

/*****************************************/
/*      This file is autogenerated       */
/*   Any manual changes will be LOST!    */
/*****************************************/
/* Generated 2002-01-04 15:45:55         */
/*****************************************/
/* This file should be stored in the     */
/* same directory as the form/datamodule */
/* with the corresponding model          */
/*****************************************/
/* Copyright notice:                     */
/*                                       */
/*****************************************/

#include <vcl.h>
#pragma hdrstop

#include "BankingClasses.hpp"

// interface uses

// interface dependancies

// attribute dependancies
#pragma link "BoldAttributes"

#pragma link "BoldDefs"
#pragma link "BoldSubscription"
#pragma link "BoldDeriver"
#pragma link "BoldElements"
#pragma link "BoldDomainElement"
#pragma link "BoldSystemRT"
#pragma link "BoldSystem"
#pragma link "BoldGeneratedCodeDictionary"

// implementation uses

// implementation dependancies

#include "BoldGeneratedCodeDictionary.hpp"

// Includefiles for methodimplementations

#include "BankingClasses_impl.cpp"

#define BoldMemberAssertInvalidObjectType = "Object of singlelink (%s.%s) is of wrong type (is %s, should be %s)";

// TBankingClassesRoot

void __fastcall TBankingClassesRootList::Add(TBankingClassesRoot *NewObject)
{
  if (NewObject != NULL)
  {
    AddElement(NewObject);
  }
}

int __fastcall TBankingClassesRootList::IndexOf(TBankingClassesRoot *anObject)
{
  int result = IndexOfElement(anObject);
  return result;
}

int __fastcall TBankingClassesRootList::Includes(TBankingClassesRoot *anObject) // boolean?
{
  int result = IncludesElement(anObject);
  return result;
}

TBankingClassesRoot* __fastcall TBankingClassesRootList::AddNew()
{
  TBankingClassesRoot *result = dynamic_cast<TBankingClassesRoot*>(InternalAddNew());
  return result;
}

void __fastcall TBankingClassesRootList::Insert(int index, TBankingClassesRoot *NewObject)
{
  if (NewObject != NULL)
  {
    InsertElement(index, NewObject);
  }
}

TBankingClassesRoot* __fastcall TBankingClassesRootList::GetBoldObject(int index)
{
  TBankingClassesRoot *result = dynamic_cast<TBankingClassesRoot*>(GetElement(index));
  return result;
}

void __fastcall TBankingClassesRootList::SetBoldObject(int index, TBankingClassesRoot *NewObject)
{
  SetElement(index, NewObject);
}

// TAccount

TBAInteger* __fastcall TAccount::_Get_M_Total()
{
  // assert(ValidateMember("TAccount", "Total", 0, __classid(TBAInteger)));
  TBAInteger *result = dynamic_cast<TBAInteger*>(BoldMembers[0]);
  return result;
};

Integer __fastcall TAccount::_GetTotal()
{
  Integer result = M_Total->AsInteger;
  return result;
}

void __fastcall TAccount::_SetTotal(Integer NewValue)
{
  M_Total->AsInteger = NewValue;
}

TBAString* __fastcall TAccount::_Get_M_Number()
{
  // assert(ValidateMember("TAccount", "Number", 1, __classid(TBAString)));
  TBAString *result = dynamic_cast<TBAString*>(BoldMembers[1]);
  return result;
};

String __fastcall TAccount::_GetNumber()
{
  String result = M_Number->AsString;
  return result;
}

void __fastcall TAccount::_SetNumber(String NewValue)
{
  M_Number->AsString = NewValue;
}

TBAInteger* __fastcall TAccount::_Get_M_Credit()
{
  // assert(ValidateMember("TAccount", "Credit", 2, __classid(TBAInteger)));
  TBAInteger *result = dynamic_cast<TBAInteger*>(BoldMembers[2]);
  return result;
};

Integer __fastcall TAccount::_GetCredit()
{
  Integer result = M_Credit->AsInteger;
  return result;
}

void __fastcall TAccount::_SetCredit(Integer NewValue)
{
  M_Credit->AsInteger = NewValue;
}

TTransferList* __fastcall TAccount::_Gettransfer1()
{
  // assert(ValidateMember("TAccount", "transfer1", 3, __classid(TTransferList)));
  TTransferList *result = dynamic_cast<TTransferList*>(BoldMembers[3]);
  return result;
}

TTransferList* __fastcall TAccount::_Gettransfer2()
{
  // assert(ValidateMember("TAccount", "transfer2", 4, __classid(TTransferList)));
  TTransferList *result = dynamic_cast<TTransferList*>(BoldMembers[4]);
  return result;
}

TBoldObjectReference* __fastcall TAccount::_Get_M_close()
{
  // assert(ValidateMember("TAccount", "close", 5, __classid(TBoldObjectReference)));
  TBoldObjectReference *result = dynamic_cast<TBoldObjectReference*>(BoldMembers[5]);
  return result;
}

TClose* _fastcall TAccount::_Getclose()
{
  // assert(not assigned(M_close->BoldObject) or (M_close->BoldObject is TClose), SysUtils.format(BoldMemberAssertInvalidObjectType, [ClassName, close, M_close->BoldObject->ClassName, __classid(TClose)]));
  TClose *result = dynamic_cast<TClose*>(M_close->BoldObject);
  return result;
}

void __fastcall TAccount::_Setclose(TClose *value)
{
  M_close->BoldObject = value;
}

TBoldObjectReference* __fastcall TAccount::_Get_M_modifyCredit()
{
  // assert(ValidateMember("TAccount", "modifyCredit", 6, __classid(TBoldObjectReference)));
  TBoldObjectReference *result = dynamic_cast<TBoldObjectReference*>(BoldMembers[6]);
  return result;
}

TModifyCredit* _fastcall TAccount::_GetmodifyCredit()
{
  // assert(not assigned(M_modifyCredit->BoldObject) or (M_modifyCredit->BoldObject is TModifyCredit), SysUtils.format(BoldMemberAssertInvalidObjectType, [ClassName, modifyCredit, M_modifyCredit->BoldObject->ClassName, __classid(TModifyCredit)]));
  TModifyCredit *result = dynamic_cast<TModifyCredit*>(M_modifyCredit->BoldObject);
  return result;
}

void __fastcall TAccount::_SetmodifyCredit(TModifyCredit *value)
{
  M_modifyCredit->BoldObject = value;
}

void __fastcall TAccountList::Add(TAccount *NewObject)
{
  if (NewObject != NULL)
  {
    AddElement(NewObject);
  }
}

int __fastcall TAccountList::IndexOf(TAccount *anObject)
{
  int result = IndexOfElement(anObject);
  return result;
}

int __fastcall TAccountList::Includes(TAccount *anObject) // boolean?
{
  int result = IncludesElement(anObject);
  return result;
}

TAccount* __fastcall TAccountList::AddNew()
{
  TAccount *result = dynamic_cast<TAccount*>(InternalAddNew());
  return result;
}

void __fastcall TAccountList::Insert(int index, TAccount *NewObject)
{
  if (NewObject != NULL)
  {
    InsertElement(index, NewObject);
  }
}

TAccount* __fastcall TAccountList::GetBoldObject(int index)
{
  TAccount *result = dynamic_cast<TAccount*>(GetElement(index));
  return result;
}

void __fastcall TAccountList::SetBoldObject(int index, TAccount *NewObject)
{
  SetElement(index, NewObject);
}

// TRequest

void __fastcall TRequestList::Add(TRequest *NewObject)
{
  if (NewObject != NULL)
  {
    AddElement(NewObject);
  }
}

int __fastcall TRequestList::IndexOf(TRequest *anObject)
{
  int result = IndexOfElement(anObject);
  return result;
}

int __fastcall TRequestList::Includes(TRequest *anObject) // boolean?
{
  int result = IncludesElement(anObject);
  return result;
}

TRequest* __fastcall TRequestList::AddNew()
{
  TRequest *result = dynamic_cast<TRequest*>(InternalAddNew());
  return result;
}

void __fastcall TRequestList::Insert(int index, TRequest *NewObject)
{
  if (NewObject != NULL)
  {
    InsertElement(index, NewObject);
  }
}

TRequest* __fastcall TRequestList::GetBoldObject(int index)
{
  TRequest *result = dynamic_cast<TRequest*>(GetElement(index));
  return result;
}

void __fastcall TRequestList::SetBoldObject(int index, TRequest *NewObject)
{
  SetElement(index, NewObject);
}

// TClose

TBoldObjectReference* __fastcall TClose::_Get_M_account()
{
  // assert(ValidateMember("TClose", "account", 0, __classid(TBoldObjectReference)));
  TBoldObjectReference *result = dynamic_cast<TBoldObjectReference*>(BoldMembers[0]);
  return result;
}

TAccount* _fastcall TClose::_Getaccount()
{
  // assert(not assigned(M_account->BoldObject) or (M_account->BoldObject is TAccount), SysUtils.format(BoldMemberAssertInvalidObjectType, [ClassName, account, M_account->BoldObject->ClassName, __classid(TAccount)]));
  TAccount *result = dynamic_cast<TAccount*>(M_account->BoldObject);
  return result;
}

void __fastcall TClose::_Setaccount(TAccount *value)
{
  M_account->BoldObject = value;
}

void __fastcall TCloseList::Add(TClose *NewObject)
{
  if (NewObject != NULL)
  {
    AddElement(NewObject);
  }
}

int __fastcall TCloseList::IndexOf(TClose *anObject)
{
  int result = IndexOfElement(anObject);
  return result;
}

int __fastcall TCloseList::Includes(TClose *anObject) // boolean?
{
  int result = IncludesElement(anObject);
  return result;
}

TClose* __fastcall TCloseList::AddNew()
{
  TClose *result = dynamic_cast<TClose*>(InternalAddNew());
  return result;
}

void __fastcall TCloseList::Insert(int index, TClose *NewObject)
{
  if (NewObject != NULL)
  {
    InsertElement(index, NewObject);
  }
}

TClose* __fastcall TCloseList::GetBoldObject(int index)
{
  TClose *result = dynamic_cast<TClose*>(GetElement(index));
  return result;
}

void __fastcall TCloseList::SetBoldObject(int index, TClose *NewObject)
{
  SetElement(index, NewObject);
}

// TModifyCredit

TBAInteger* __fastcall TModifyCredit::_Get_M_NewCredit()
{
  // assert(ValidateMember("TModifyCredit", "NewCredit", 0, __classid(TBAInteger)));
  TBAInteger *result = dynamic_cast<TBAInteger*>(BoldMembers[0]);
  return result;
};

Integer __fastcall TModifyCredit::_GetNewCredit()
{
  Integer result = M_NewCredit->AsInteger;
  return result;
}

void __fastcall TModifyCredit::_SetNewCredit(Integer NewValue)
{
  M_NewCredit->AsInteger = NewValue;
}

TBoldObjectReference* __fastcall TModifyCredit::_Get_M_account()
{
  // assert(ValidateMember("TModifyCredit", "account", 1, __classid(TBoldObjectReference)));
  TBoldObjectReference *result = dynamic_cast<TBoldObjectReference*>(BoldMembers[1]);
  return result;
}

TAccount* _fastcall TModifyCredit::_Getaccount()
{
  // assert(not assigned(M_account->BoldObject) or (M_account->BoldObject is TAccount), SysUtils.format(BoldMemberAssertInvalidObjectType, [ClassName, account, M_account->BoldObject->ClassName, __classid(TAccount)]));
  TAccount *result = dynamic_cast<TAccount*>(M_account->BoldObject);
  return result;
}

void __fastcall TModifyCredit::_Setaccount(TAccount *value)
{
  M_account->BoldObject = value;
}

void __fastcall TModifyCreditList::Add(TModifyCredit *NewObject)
{
  if (NewObject != NULL)
  {
    AddElement(NewObject);
  }
}

int __fastcall TModifyCreditList::IndexOf(TModifyCredit *anObject)
{
  int result = IndexOfElement(anObject);
  return result;
}

int __fastcall TModifyCreditList::Includes(TModifyCredit *anObject) // boolean?
{
  int result = IncludesElement(anObject);
  return result;
}

TModifyCredit* __fastcall TModifyCreditList::AddNew()
{
  TModifyCredit *result = dynamic_cast<TModifyCredit*>(InternalAddNew());
  return result;
}

void __fastcall TModifyCreditList::Insert(int index, TModifyCredit *NewObject)
{
  if (NewObject != NULL)
  {
    InsertElement(index, NewObject);
  }
}

TModifyCredit* __fastcall TModifyCreditList::GetBoldObject(int index)
{
  TModifyCredit *result = dynamic_cast<TModifyCredit*>(GetElement(index));
  return result;
}

void __fastcall TModifyCreditList::SetBoldObject(int index, TModifyCredit *NewObject)
{
  SetElement(index, NewObject);
}

// TTransfer

TBAInteger* __fastcall TTransfer::_Get_M_Amount()
{
  // assert(ValidateMember("TTransfer", "Amount", 0, __classid(TBAInteger)));
  TBAInteger *result = dynamic_cast<TBAInteger*>(BoldMembers[0]);
  return result;
};

Integer __fastcall TTransfer::_GetAmount()
{
  Integer result = M_Amount->AsInteger;
  return result;
}

void __fastcall TTransfer::_SetAmount(Integer NewValue)
{
  M_Amount->AsInteger = NewValue;
}

TBoldObjectReference* __fastcall TTransfer::_Get_M_Source()
{
  // assert(ValidateMember("TTransfer", "Source", 1, __classid(TBoldObjectReference)));
  TBoldObjectReference *result = dynamic_cast<TBoldObjectReference*>(BoldMembers[1]);
  return result;
}

TAccount* _fastcall TTransfer::_GetSource()
{
  // assert(not assigned(M_Source->BoldObject) or (M_Source->BoldObject is TAccount), SysUtils.format(BoldMemberAssertInvalidObjectType, [ClassName, Source, M_Source->BoldObject->ClassName, __classid(TAccount)]));
  TAccount *result = dynamic_cast<TAccount*>(M_Source->BoldObject);
  return result;
}

void __fastcall TTransfer::_SetSource(TAccount *value)
{
  M_Source->BoldObject = value;
}

TBoldObjectReference* __fastcall TTransfer::_Get_M_Target()
{
  // assert(ValidateMember("TTransfer", "Target", 2, __classid(TBoldObjectReference)));
  TBoldObjectReference *result = dynamic_cast<TBoldObjectReference*>(BoldMembers[2]);
  return result;
}

TAccount* _fastcall TTransfer::_GetTarget()
{
  // assert(not assigned(M_Target->BoldObject) or (M_Target->BoldObject is TAccount), SysUtils.format(BoldMemberAssertInvalidObjectType, [ClassName, Target, M_Target->BoldObject->ClassName, __classid(TAccount)]));
  TAccount *result = dynamic_cast<TAccount*>(M_Target->BoldObject);
  return result;
}

void __fastcall TTransfer::_SetTarget(TAccount *value)
{
  M_Target->BoldObject = value;
}

void __fastcall TTransferList::Add(TTransfer *NewObject)
{
  if (NewObject != NULL)
  {
    AddElement(NewObject);
  }
}

int __fastcall TTransferList::IndexOf(TTransfer *anObject)
{
  int result = IndexOfElement(anObject);
  return result;
}

int __fastcall TTransferList::Includes(TTransfer *anObject) // boolean?
{
  int result = IncludesElement(anObject);
  return result;
}

TTransfer* __fastcall TTransferList::AddNew()
{
  TTransfer *result = dynamic_cast<TTransfer*>(InternalAddNew());
  return result;
}

void __fastcall TTransferList::Insert(int index, TTransfer *NewObject)
{
  if (NewObject != NULL)
  {
    InsertElement(index, NewObject);
  }
}

TTransfer* __fastcall TTransferList::GetBoldObject(int index)
{
  TTransfer *result = dynamic_cast<TTransfer*>(GetElement(index));
  return result;
}

void __fastcall TTransferList::SetBoldObject(int index, TTransfer *NewObject)
{
  SetElement(index, NewObject);
}

char *GeneratedCodeCRC()
{
  return "478075486";
}

void __fastcall InstallObjectListClasses(TBoldGeneratedClassList *BoldObjectListClasses)
{
  BoldObjectListClasses->AddObjectEntry("BankingClassesRoot", __classid(TBankingClassesRootList));
  BoldObjectListClasses->AddObjectEntry("Account", __classid(TAccountList));
  BoldObjectListClasses->AddObjectEntry("Request", __classid(TRequestList));
  BoldObjectListClasses->AddObjectEntry("Close", __classid(TCloseList));
  BoldObjectListClasses->AddObjectEntry("ModifyCredit", __classid(TModifyCreditList));
  BoldObjectListClasses->AddObjectEntry("Transfer", __classid(TTransferList));
}

void __fastcall InstallBusinessClasses(TBoldGeneratedClassList *BoldObjectClasses)
{
  BoldObjectClasses->AddObjectEntry("BankingClassesRoot", __classid(TBankingClassesRoot));
  BoldObjectClasses->AddObjectEntry("Account", __classid(TAccount));
  BoldObjectClasses->AddObjectEntry("Request", __classid(TRequest));
  BoldObjectClasses->AddObjectEntry("Close", __classid(TClose));
  BoldObjectClasses->AddObjectEntry("ModifyCredit", __classid(TModifyCredit));
  BoldObjectClasses->AddObjectEntry("Transfer", __classid(TTransfer));
}

// the codedestricptor is initialized automatically

TBoldGeneratedCodeDescriptor *CodeDescriptor = GeneratedCodes()->AddGeneratedCodeDescriptorWithFunc("BankingClasses", &InstallBusinessClasses, &InstallObjectListClasses, GeneratedCodeCRC());

// but should be unloaded manually when it is not needed anymore

void unregisterCode()
{
  if (CodeDescriptor != NULL)
  {
    GeneratedCodes()->Remove(CodeDescriptor);
  }
}
 
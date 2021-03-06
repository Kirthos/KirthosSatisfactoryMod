// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGSaveSession.h"

UFGSaveSession::UFGSaveSession(){ }
UFGSaveSession::~UFGSaveSession(){ }
void UFGSaveSession::Init( bool willLoad){ }
UFGSaveSession* UFGSaveSession::Get(  UWorld* world){ return nullptr; }
UFGSaveSession* UFGSaveSession::Get(  UObject* worldContext){ return nullptr; }
void UFGSaveSession::RoutePostLoadGame(){ }
bool UFGSaveSession::SaveGame( FString fileName){ return bool(); }
bool UFGSaveSession::ReadRawSaveGameData( FString saveGameName, TArray< uint8 >& out_rawSaveData){ return bool(); }
bool UFGSaveSession::LoadGame( FString saveName){ return bool(); }
bool UFGSaveSession::SerializeHeader( FArchive& Ar, FSaveHeader& saveHeader){ return bool(); }
FString UFGSaveSession::SaveNameToFileName( const FString& saveName){ return FString(); }
void UFGSaveSession::SharedInventoryPtrLoaded(  FSharedInventoryStatePtr& ptr){ }
void UFGSaveSession::Autosave(){ }
void UFGSaveSession::DeleteSave( FString sessionName, int32 autosaveNum){ }
UWorld* UFGSaveSession::GetWorld() const{ return nullptr; }
FString UFGSaveSession::GenerateAutosaveName( int32& out_autosaveNum, FString sessionName){ return FString(); }
FString UFGSaveSession::GetFullMapName() const{ return FString(); }
void UFGSaveSession::SetupAutosave(){ }
void UFGSaveSession::SortObjectsByDependency( TArray< UObject* >& io_objectsToSerialize){ }
void UFGSaveSession::CollectObjects( TArray<UObject*> rootSet, TArray< UObject* >& out_objectsToSerialize){ }
void UFGSaveSession::CollectObjects( UObject* rootObject, TArray< UObject* >& out_objectsToSerialize){ }
void UFGSaveSession::GenerateRootSet( TArray<UObject*>& out_rootSet){ }
void UFGSaveSession::LoadDestroyActors(){ }
void UFGSaveSession::PrepareLevelActors( bool prepareForLoad){ }
void UFGSaveSession::OnActorDestroyed( AActor* destroyedActor){ }
void UFGSaveSession::SaveWorldImplementation( FString gameName){ }
void UFGSaveSession::BundledSaveWorldImplementation( FString gameName){ }

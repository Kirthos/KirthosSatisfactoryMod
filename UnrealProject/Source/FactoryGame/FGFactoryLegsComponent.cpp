// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGFactoryLegsComponent.h"

#if WITH_EDITOR
void UFGFactoryLegsComponent::OnRegister(){ Super::OnRegister(); }
void UFGFactoryLegsComponent::OnUnregister(){ Super::OnUnregister(); }
#endif 
void UFGFactoryLegsComponent::GetLifetimeReplicatedProps( TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
UFGFactoryLegsComponent::UFGFactoryLegsComponent(){ }
void UFGFactoryLegsComponent::BeginPlay(){ }
void UFGFactoryLegsComponent::EndPlay( const EEndPlayReason::Type endPlayReason){ }
void UFGFactoryLegsComponent::PreSaveGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void UFGFactoryLegsComponent::PostSaveGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void UFGFactoryLegsComponent::PreLoadGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void UFGFactoryLegsComponent::PostLoadGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void UFGFactoryLegsComponent::GatherDependencies_Implementation( TArray< UObject* >& out_dependentObjects){ }
bool UFGFactoryLegsComponent::NeedTransform_Implementation(){ return bool(); }
bool UFGFactoryLegsComponent::ShouldSave_Implementation() const{ return bool(); }
TArray< FFeetOffset > UFGFactoryLegsComponent::TraceFeetOffsets( const FTransform& actorTransform) const{ return TArray<FFeetOffset>(); }
void UFGFactoryLegsComponent::SetFeetOffsets( const TArray< FFeetOffset >& offsets){ }
float UFGFactoryLegsComponent::GetMaxLegLength() const{ return float(); }
bool UFGFactoryLegsComponent::GetTracedFeetOffsetFromGround( const FTransform& actorTransform, UFGFactoryLegsComponent* legsComp, TArray<FFeetOffset>& out_tracedFeetOffsets, float& out_highestFootOffset, float& out_longestLeg){ return bool(); }
FFeetOffset UFGFactoryLegsComponent::TraceFootOffset( FName socket, const FTransform& actorTransform) const{ return FFeetOffset(); }
UStaticMesh* UFGFactoryLegsComponent::GetLegMesh() const{ return nullptr; }
UStaticMesh* UFGFactoryLegsComponent::GetFootMesh() const{ return nullptr; }
void UFGFactoryLegsComponent::CreateLegs(){ }
void UFGFactoryLegsComponent::RemoveLegs(){ }
void UFGFactoryLegsComponent::CreateFoot( const FFeetOffset& offset){ }
bool UFGFactoryLegsComponent::CachedFeetOffsetsAreValid(){ return bool(); }

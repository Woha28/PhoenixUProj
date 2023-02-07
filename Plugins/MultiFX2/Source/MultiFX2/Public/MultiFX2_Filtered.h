#pragma once
#include "CoreMinimal.h"
#include "MultiFX2_Base.h"
#include "MultiFX2_Filtered.generated.h"

class UFXAdjustments;
class UFXEnd;
class UFXFilter;
class UFXUpdate;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class MULTIFX2_API UMultiFX2_Filtered : public UMultiFX2_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFXFilter*> Filters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFXAdjustments*> Adjustments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFXUpdate*> Updates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFXEnd*> Ends;
    
public:
    UMultiFX2_Filtered();
};


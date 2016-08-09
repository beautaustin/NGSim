#include "LXeGeneralPhysics.hh"

#include "globals.hh"
#include "G4ios.hh"
#include <iomanip>

LXeGeneralPhysics::LXeGeneralPhysics(const G4String& name) : G4VPhysicsConstructor(name) {}

LXeGeneralPhysics::~LXeGeneralPhysics() {}

#include "G4ParticleDefinition.hh"
#include "G4ProcessManager.hh"

//#include "G4Geantino.hh"
//#include "G4ChargedGeantino.hh"
//#include "G4GenericIon.hh"
//#include "G4Proton.hh"

#include "G4Neutron.hh"
#include "G4Proton.hh"
#include "G4GenericIon.hh"

void LXeGeneralPhysics::ConstructParticle()
{
  // pseudo-particles
  //G4Geantino::GeantinoDefinition();
  //G4ChargedGeantino::ChargedGeantinoDefinition();
  //G4GenericIon::GenericIonDefinition();
  G4Neutron::NeutronDefinition();
  G4Proton::ProtonDefinition();
  G4GenericIon::GenericIonDefinition();
}


//#include "G4NeutronElasticProcess.hh"
//#include "G4ProtonElasticProcess.hh"
#include "G4HadronElasticProcess.hh"
#include "G4NeutronInelasticProcess.hh"
#include "G4ProtonInelasticProcess.hh"
#include "G4HadronInelasticProcess.hh"

void LXeGeneralPhysics::ConstructProcess() {

  /*
  G4Decay* fDecayProcess = new G4Decay();
  // Add Decay Process
  aParticleIterator->reset();
  while( (*aParticleIterator)() ){
    G4ParticleDefinition* particle = aParticleIterator->value();
    G4ProcessManager* pmanager = particle->GetProcessManager();
    if (fDecayProcess->IsApplicable(*particle)) {
      pmanager ->AddProcess(fDecayProcess);
      // set ordering for PostStepDoIt and AtRestDoIt
      pmanager ->SetProcessOrdering(fDecayProcess, idxPostStep);
      pmanager ->SetProcessOrdering(fDecayProcess, idxAtRest);
    }
  }
  */

/*
  G4NeutronElasticProcess *fNeutronElasticProcess = new G4NeutronElasticProcess();
  aParticleIterator->reset();
  while( (*aParticleIterator)() ){
    G4ParticleDefinition* particle = aParticleIterator->value();
    G4ProcessManager* pmanager = particle->GetProcessManager();
    if (fNeutronElasticProcess->IsApplicable(*particle)) {
      pmanager ->AddDiscreteProcess(fNeutronElasticProcess);
      // set ordering for PostStepDoIt and AtRestDoIt
      //pmanager ->SetProcessOrdering(fNeutronElasticProcess, idxPostStep);
      //pmanager ->SetProcessOrdering(fNeutronElasticProcess, idxAtRest);
    }
  }
*/
/*
  G4ProtonElasticProcess *fProtonElasticProcess = new G4ProtonElasticProcess();
  aParticleIterator->reset();
  while( (*aParticleIterator)() ){
    G4ParticleDefinition* particle = aParticleIterator->value();
    G4ProcessManager* pmanager = particle->GetProcessManager();
    if (fProtonElasticProcess->IsApplicable(*particle)) {
      pmanager ->AddDiscreteProcess(fProtonElasticProcess);
      // set ordering for PostStepDoIt and AtRestDoIt
      //pmanager ->SetProcessOrdering(fProtonElasticProcess, idxPostStep);
      //pmanager ->SetProcessOrdering(fProtonElasticProcess, idxAtRest);
    }
  }
*/

  G4HadronElasticProcess *fHadronElasticProcess = new G4HadronElasticProcess();
  aParticleIterator->reset();
  while( (*aParticleIterator)() ){
    G4ParticleDefinition* particle = aParticleIterator->value();
    G4ProcessManager* pmanager = particle->GetProcessManager();
    if (fHadronElasticProcess->IsApplicable(*particle)) {
      pmanager ->AddDiscreteProcess(fHadronElasticProcess);
      // set ordering for PostStepDoIt and AtRestDoIt
      //pmanager ->SetProcessOrdering(fHadronElasticProcess, idxPostStep);
      //pmanager ->SetProcessOrdering(fHadronElasticProcess, idxAtRest);
    }
  }

/*
  G4NeutronInelasticProcess *fNeutronInelasticProcess = new G4NeutronInelasticProcess();
  aParticleIterator->reset();
  while( (*aParticleIterator)() ){
    G4ParticleDefinition* particle = aParticleIterator->value();
    G4ProcessManager* pmanager = particle->GetProcessManager();
    if (fNeutronInelasticProcess->IsApplicable(*particle)) {
      pmanager ->AddProcess(fNeutronInelasticProcess);
      // set ordering for PostStepDoIt and AtRestDoIt
      //pmanager ->SetProcessOrdering(fNeutronInelasticProcess, idxPostStep);
      //pmanager ->SetProcessOrdering(fNeutronInelasticProcess, idxAtRest);
    }
  }

  G4ProtonInelasticProcess *fProtonInelasticProcess = new G4ProtonInelasticProcess();
  aParticleIterator->reset();
  while( (*aParticleIterator)() ){
    G4ParticleDefinition* particle = aParticleIterator->value();
    G4ProcessManager* pmanager = particle->GetProcessManager();
    if (fProtonInelasticProcess->IsApplicable(*particle)) {
      pmanager ->AddDiscreteProcess(fProtonInelasticProcess);
      // set ordering for PostStepDoIt and AtRestDoIt
      //pmanager ->SetProcessOrdering(fProtonInelasticProcess, idxPostStep);
      //pmanager ->SetProcessOrdering(fProtonInelasticProcess, idxAtRest);
    }
  }
*/
}

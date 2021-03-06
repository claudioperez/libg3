
// Description: This file contains the functions that will be called by
// the interpreter when the appropriate command name is specified.


#include <OPS_Globals.h>

int OPS_SetObjCmd(ClientData clientData, Tcl_Interp *interp, int argc,
                  Tcl_Obj *const *argv);

int OPS_SourceCmd(ClientData clientData, Tcl_Interp *interp, int argc,
                  Tcl_Obj *const *argv);

int OpenSeesAppInit(Tcl_Interp *interp);


// by SAJalali
int OPS_recorderValue(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int getNDM(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int getNDF(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int wipeModel(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int wipeAnalysis(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int resetModel(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int initializeAnalysis(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int setLoadConst(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int setCreep(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int setTime(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int getTime(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int getLoadFactor(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int buildModel(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int analyzeModel(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int printModel(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);
int specifyAnalysis(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int specifySOE(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);
int specifySysOfEqnTable(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

DOF_Numberer* G3Parse_newNumberer(G3_Runtime*, int, G3_Char**);
// int specifyNumberer(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);
int specifyConstraintHandler(ClientData clientData, Tcl_Interp *interp, int argc, TCL_Char **argv);
int specifyAlgorithm(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

// from commands/analysis/ctest.cpp
int specifyCTest(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);
int getCTestNorms(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);
int getCTestIter(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int specifyIntegrator(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);
int addRecorder(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);
int addAlgoRecorder(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int addDatabase(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int playbackRecorders(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int playbackAlgorithmRecorders(ClientData clientData, Tcl_Interp *interp, int argc, TCL_Char **argv);

int groundExcitation(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int eigenAnalysis(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int modalProperties(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int responseSpectrum(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int videoPlayer(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int removeObject(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int eleForce(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int localForce(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int eleDynamicalForce(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int eleResponse(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int findID(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int nodeDisp(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int nodeReaction(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int nodeUnbalance(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int nodeEigenvector(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int nodeCoord(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int setNodeCoord(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int updateElementDomain(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int eleType(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int eleNodes(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int nodeBounds(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int nodeVel(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int setNodeVel(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int setNodeDisp(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int setNodeAccel(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int nodeAccel(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int nodeResponse(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int calculateNodalReactions(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int getNodeTags(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int getEleTags(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int fixedNodes(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int fixedDOFs(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int constrainedNodes(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int constrainedDOFs(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int retainedNodes(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int retainedDOFs(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int nodeDOFs(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int nodeMass(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int nodePressure(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int getParamTags(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int getParamValue(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int sdfResponse(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

// AddingSensitivity:BEGIN /////////////////////////////////////////////////

int computeGradients(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int sensNodeDisp(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int sensLambda(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv); // Abbas

int sensNodeVel(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int sensNodeAccel(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int sensNodePressure(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int sensSectionForce(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int sensitivityAlgorithm(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int sensitivityIntegrator(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);
// AddingSensitivity:END ///////////////////////////////////////////////////

int getNumElements(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int getEleClassTags(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int getEleLoadClassTags(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int getEleLoadTags(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int getEleLoadData(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int startTimer(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int stopTimer(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int rayleighDamping(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int modalDamping(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int modalDampingQ(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int setElementRayleighDampingFactors(ClientData clientData, Tcl_Interp *interp, int argc, TCL_Char **argv);

int addRegion(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int sectionForce(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int sectionDeformation(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int sectionStiffness(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int sectionFlexibility(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int sectionLocation(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int sectionWeight(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int basicDeformation(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int basicForce(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int basicStiffness(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

// added: Chris McGann, U.Washington for initial state analysis of nDMaterials
int InitialStateAnalysis(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int totalCPU(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int solveCPU(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int accelCPU(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int numFact(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int numIter(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int systemSize(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);

int elementActivate(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);
int elementDeactivate(ClientData clientData, Tcl_Interp *interp, int argc,TCL_Char **argv);


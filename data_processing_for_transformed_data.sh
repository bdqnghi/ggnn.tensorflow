INPUT_PATH=transformed_data
DATASET=java-med
PART=testing
NUM_WORKER=16
FBS=0
TXT=1
PKL=0
PB=0
PYTHON=python3
${PYTHON} data_processing_for_transformed_data.py --path ${INPUT_PATH} --part ${PART} --dataset ${DATASET} --worker ${NUM_WORKER} --fbs ${FBS} --txt ${TXT} --pkl ${PKL} --pb ${PB}
#${PYTHON} data_processing.py --path ${TEST_DIR} --worker ${NUM_WORKER} --fbs ${FBS} --txt ${TXT} --pkl ${PKL} --pb ${PB}
#${PYTHON} data_processing.py --path ${VAL_DIR} --worker ${NUM_WORKER} --fbs ${FBS} --txt ${TXT} --pkl ${PKL} --pb ${PB}
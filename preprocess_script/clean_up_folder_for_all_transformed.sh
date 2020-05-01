DATA=../new_data/java-dataset
DATASET=java-small
PART=test
BOOLEAN_EXCHANGE_DIR=${DATA}/BooleanExchange/${DATASET}/${PART}
LOOP_EXCHANGE_DIR=${DATA}/LoopExchange/${DATASET}/${PART}
PERMUTE_STATEMENT_DIR=${DATA}/PermuteStatement/${DATASET}/${PART}
RENAME_VARIABLE_DIR=${DATA}/RenameVariable/${DATASET}/${PART}
SWITCH_CONDITIONAL_DIR=${DATA}/SwitchConditional/${DATASET}/${PART}
TRY_CATCH_DIR=${DATA}/TryCatch/${DATASET}/${PART}
UNREACHABLE_STATEMENT_DIR=${DATA}/UnreachableStatement/${DATASET}/${PART}
UNUSED_STATEMENT_STATEMENT_DIR=${DATA}/UnusedStatement/${DATASET}/${PART}
PYTHON=python3
${PYTHON} clean_up_folder.py --path ${BOOLEAN_EXCHANGE_DIR} 
# ${PYTHON} clean_up_folder.py --path ${LOOP_EXCHANGE_DIR} 
# ${PYTHON} clean_up_folder.py --path ${PERMUTE_STATEMENT_DIR} 
# ${PYTHON} clean_up_folder.py --path ${RENAME_VARIABLE_DIR} 
# ${PYTHON} clean_up_folder.py --path ${SWITCH_CONDITIONAL_DIR} 
# ${PYTHON} clean_up_folder.py --path ${TRY_CATCH_DIR} 
# ${PYTHON} clean_up_folder.py --path ${UNREACHABLE_STATEMENT_DIR} 
# ${PYTHON} clean_up_folder.py --path ${UNUSED_STATEMENT_STATEMENT_DIR}
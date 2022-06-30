#include "Nest.h"




char novex_nest_Nova_InvalidAssertionException_Nova_init_static_inited = 0;
void novex_nest_Nova_InvalidAssertionException_Nova_init_static()
{
	if (!novex_nest_Nova_InvalidAssertionException_Nova_init_static_inited) {
		novex_nest_Nova_InvalidAssertionException_Nova_init_static_inited = 1;
		{
		}
	}
}

novex_nest_Nova_InvalidAssertionException* novex_nest_Nova_InvalidAssertionException_Nova_construct(novex_nest_Nova_InvalidAssertionException* this, nova_Nova_String* message)
{
	CCLASS_NEW(novex_nest_Nova_InvalidAssertionException, this,);
	this->vtable = &novex_nest_Nova_InvalidAssertionException_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	nova_exception_Nova_Exception_Nova_super((nova_exception_Nova_Exception*)this);
	novex_nest_Nova_NestException_Nova_super((novex_nest_Nova_NestException*)this);
	novex_nest_Nova_InvalidAssertionException_Nova_super(this);
	
	return novex_nest_Nova_InvalidAssertionException_Nova_this((novex_nest_Nova_InvalidAssertionException*)(this),
	message);
}

void novex_nest_Nova_InvalidAssertionException_Nova_destroy(novex_nest_Nova_InvalidAssertionException** this)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

novex_nest_Nova_InvalidAssertionException* novex_nest_Nova_InvalidAssertionException_Nova_this(novex_nest_Nova_InvalidAssertionException* this, nova_Nova_String* message) {
	novex_nest_Nova_NestException_Nova_this((novex_nest_Nova_NestException*)(this),
	message);
	return this;
}
void novex_nest_Nova_InvalidAssertionException_Nova_super(novex_nest_Nova_InvalidAssertionException* this)
{
}




CCLASS_PRIVATE
(
	novex_nest_Nova_Nest,
	nova_Nova_Object* novex_nest_Nova_Nest_Nova_data;
	
)
novex_nest_Nova_Nest* novex_nest_Nova_Nest_Nova_construct(novex_nest_Nova_Nest* this, nova_Nova_Object* data);
CCLASS_PRIVATE
(
	novex_nest_Bool_Nova_Nest1Bool,
	char novex_nest_Bool_Nova_Nest1Bool_Nova_data;
	
)
novex_nest_Bool_Nova_Nest1Bool* novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(novex_nest_Bool_Nova_Nest1Bool* this, char data);
CCLASS_PRIVATE
(
	novex_nest_Int_Nova_Nest1Int,
	int novex_nest_Int_Nova_Nest1Int_Nova_data;
	
)
novex_nest_Int_Nova_Nest1Int* novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(novex_nest_Int_Nova_Nest1Int* this, int data);
CCLASS_PRIVATE
(
	novex_nest_Long_Nova_Nest1Long,
	long_long novex_nest_Long_Nova_Nest1Long_Nova_data;
	
)
novex_nest_Long_Nova_Nest1Long* novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(novex_nest_Long_Nova_Nest1Long* this, long_long data);
CCLASS_PRIVATE
(
	novex_nest_Char_Nova_Nest1Char,
	char novex_nest_Char_Nova_Nest1Char_Nova_data;
	
)
novex_nest_Char_Nova_Nest1Char* novex_nest_Char_Nova_Nest1Char_char_Nest1Char_Nova_construct(novex_nest_Char_Nova_Nest1Char* this, char data);
CCLASS_PRIVATE
(
	novex_nest_Byte_Nova_Nest1Byte,
	char novex_nest_Byte_Nova_Nest1Byte_Nova_data;
	
)
novex_nest_Byte_Nova_Nest1Byte* novex_nest_Byte_Nova_Nest1Byte_char_Nest1Byte_Nova_construct(novex_nest_Byte_Nova_Nest1Byte* this, char data);
CCLASS_PRIVATE
(
	novex_nest_Double_Nova_Nest1Double,
	double novex_nest_Double_Nova_Nest1Double_Nova_data;
	
)
novex_nest_Double_Nova_Nest1Double* novex_nest_Double_Nova_Nest1Double_double_Nest1Double_Nova_construct(novex_nest_Double_Nova_Nest1Double* this, double data);
CCLASS_PRIVATE
(
	novex_nest_Float_Nova_Nest1Float,
	float novex_nest_Float_Nova_Nest1Float_Nova_data;
	
)
novex_nest_Float_Nova_Nest1Float* novex_nest_Float_Nova_Nest1Float_float_Nest1Float_Nova_construct(novex_nest_Float_Nova_Nest1Float* this, float data);
nova_io_Nova_FancyOutputStream* novex_nest_Nova_Nest_Nova_out;
char novex_nest_Nova_Nest_Nova_init_static_inited = 0;
void novex_nest_Nova_Nest_Nova_init_static()
{
	if (!novex_nest_Nova_Nest_Nova_init_static_inited) {
		novex_nest_Nova_Nest_Nova_init_static_inited = 1;
		nova_io_Nova_FancyOutputStream_Nova_init_static();
		nova_io_Nova_Console_Nova_init_static();
		{
			novex_nest_Nova_Nest_Nova_out = nova_io_Nova_FancyOutputStream_Nova_construct(0,
				0,
				(int)(intptr_t)nova_null,
			0);
		}
	}
}

novex_nest_Nova_Nest* novex_nest_Nova_Nest_Nova_construct(novex_nest_Nova_Nest* this, nova_Nova_Object* data)
{
	CCLASS_NEW(novex_nest_Nova_Nest, this);
	this->vtable = &novex_nest_Nova_Nest_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	novex_nest_Nova_Nest_Nova_super(this);
	
	return novex_nest_Nova_Nest_Nova_this((novex_nest_Nova_Nest*)(this),
	data);
}

void novex_nest_Nova_Nest_Nova_destroy(novex_nest_Nova_Nest** this)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE((*this)->prv);
	
	NOVA_FREE(*this);
}

novex_nest_Nova_Nest* novex_nest_Nova_Nest_Nova_this(novex_nest_Nova_Nest* this, nova_Nova_Object* data) {
	this->prv->novex_nest_Nova_Nest_Nova_data = data;
	return this;
}
char novex_nest_Nova_Nest_Nova_toBe(novex_nest_Nova_Nest* this, nova_Nova_Object* other, nova_Nova_String* message)
{
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)message);
	if ((nova_Nova_Object*)other != (nova_Nova_Object*)this->prv->novex_nest_Nova_Nest_Nova_data)
	{
		nova_Nova_String* nova_local_0 = (nova_Nova_String*)nova_null;
		
		message = (nova_Nova_String*)((nova_local_0 = message) != (nova_Nova_String*)nova_null ? (nova_Nova_Object*)nova_local_0 : (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((this->prv->novex_nest_Nova_Nest_Nova_data)))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != "))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((other)))),
								(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
										(char*)("")))))))));
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
		return 0;
	}
	return 1;
}

char novex_nest_Nova_Nest_Nova_toNotBe(novex_nest_Nova_Nest* this, nova_Nova_Object* other, nova_Nova_String* message)
{
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)message);
	if ((nova_Nova_Object*)other == (nova_Nova_Object*)this->prv->novex_nest_Nova_Nest_Nova_data)
	{
		nova_Nova_String* nova_local_0 = (nova_Nova_String*)nova_null;
		
		message = (nova_Nova_String*)((nova_local_0 = message) != (nova_Nova_String*)nova_null ? (nova_Nova_Object*)nova_local_0 : (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((this->prv->novex_nest_Nova_Nest_Nova_data)))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" == "))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((other)))),
								(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
										(char*)("")))))))));
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
		return 0;
	}
	return 1;
}

char novex_nest_Nova_Nest_Nova_toBeWithinToleranceOf(novex_nest_Nova_Nest* this, double target, double tolerance, nova_Nova_String* message)
{
	tolerance = (double)(tolerance == (int)(intptr_t)nova_null ? 0.0001 : tolerance);
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)message);
	if (!nova_primitive_number_Nova_Double_static_Nova_withinTolerance((nova_primitive_number_Nova_Double*)(0),
			(double)((nova_primitive_number_Nova_Double*)this->prv->novex_nest_Nova_Nest_Nova_data)->nova_primitive_number_Nova_Double_Nova_value,
			target,
	tolerance))
	{
		nova_Nova_String* nova_local_0 = (nova_Nova_String*)nova_null;
		
		message = (nova_Nova_String*)((nova_local_0 = message) != (nova_Nova_String*)nova_null ? (nova_Nova_Object*)nova_local_0 : (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((this->prv->novex_nest_Nova_Nest_Nova_data)))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" not within tolerance of "))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Double_static_Nova_toString((nova_primitive_number_Nova_Double*)(0),
										(target))),
								(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
										(char*)("")))))))));
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
		return 0;
	}
	return 1;
}

void novex_nest_Nova_Nest_Nova_toThrow(novex_nest_Nova_Nest* this, nova_meta_Nova_Class* exceptionType, nova_Nova_String* message, int soft)
{
	/*l1_closure952_Nova_func*/nova_funcStruct* l1_Nova_func = (/*l1_closure952_Nova_func*/nova_funcStruct*)nova_null;
	
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
					(char*)("Did not throw exception type "))),
			(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((exceptionType)))),
					(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("")))))) : (nova_Nova_Object*)message);
	soft = (int)(soft == (int)(intptr_t)nova_null ? 0 : soft);
	l1_Nova_func = (/*l1_closure952_Nova_func*/nova_funcStruct*)(this->prv->novex_nest_Nova_Nest_Nova_data);
	if (!nova_exception_Nova_Exception_static_Nova_catchType((nova_exception_Nova_Exception*)(0),
			(nova_exception_Nova_Exception_closure1353_Nova_func)(l1_Nova_func->func), l1_Nova_func->ref, l1_Nova_func->context,
			exceptionType,
			soft,
			(int)(intptr_t)nova_null))
	{
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
	}
}

void novex_nest_Nova_Nest_Nova_toNotThrow(novex_nest_Nova_Nest* this, nova_meta_Nova_Class* exceptionType, nova_Nova_String* message, int soft)
{
	/*l1_closure956_Nova_func*/nova_funcStruct* l1_Nova_func = (/*l1_closure956_Nova_func*/nova_funcStruct*)nova_null;
	
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
					(char*)("Threw exception type "))),
			(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((exceptionType)))),
					(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("")))))) : (nova_Nova_Object*)message);
	soft = (int)(soft == (int)(intptr_t)nova_null ? 0 : soft);
	l1_Nova_func = (/*l1_closure956_Nova_func*/nova_funcStruct*)(this->prv->novex_nest_Nova_Nest_Nova_data);
	if (nova_exception_Nova_Exception_static_Nova_catchType((nova_exception_Nova_Exception*)(0),
			(nova_exception_Nova_Exception_closure1353_Nova_func)(l1_Nova_func->func), l1_Nova_func->ref, l1_Nova_func->context,
			exceptionType,
			soft,
			(int)(intptr_t)nova_null))
	{
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
	}
}

void novex_nest_Nova_Nest_static_Nova_fail(novex_nest_Nova_Nest* this, nova_Nova_String* message)
{
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)nova_Nova_String_1_Nova_construct(0,
			(char*)("Failure")) : (nova_Nova_Object*)message);
	THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
	message), 0);
}

novex_nest_Nova_Nest* novex_nest_Nova_Nest_0_static_Nova_expect(novex_nest_Nova_Nest* this, nova_Nova_Object* obj)
{
	return novex_nest_Nova_Nest_Nova_construct(0,
		(nova_Nova_Object*)(obj));
}

novex_nest_Nova_Nest* novex_nest_Nova_Nest_1_static_Nova_expect(novex_nest_Nova_Nest* this, novex_nest_Nova_Nest_closure959_Nova_func novex_nest_Nova_Nest_Nova_func, void* novex_nest_Nova_Nest_ref_Nova_func, void* novex_nest_Nova_Nest_context_Nova_func)
{
	return novex_nest_Nova_Nest_Nova_construct(0,
		(nova_Nova_Object*)nova_get_funcStruct3(novex_nest_Nova_Nest_Nova_func, novex_nest_Nova_Nest_ref_Nova_func, novex_nest_Nova_Nest_context_Nova_func));
}

void novex_nest_Nova_Nest_static_Nova_test(novex_nest_Nova_Nest* this, nova_Nova_String* description, novex_nest_Nova_Nest_closure964_Nova_testCode novex_nest_Nova_Nest_Nova_testCode, void* novex_nest_Nova_Nest_ref_Nova_testCode, void* novex_nest_Nova_Nest_context_Nova_testCode)
{
	novex_nest_Nova_Nest_Nova_testCode(novex_nest_Nova_Nest_ref_Nova_testCode,
	novex_nest_Nova_Nest_context_Nova_testCode);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool2_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool3_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int4_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int5_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool6_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool7_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long8_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool9_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool10_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool11_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int12_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int13_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool14_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool15_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool16_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool17_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool18_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int19_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int20_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Char_Nova_Nest1Char* novex_nest_Nova_Nest_char_Nest1Char21_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Char_Nova_Nest1Char_char_Nest1Char_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int22_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool23_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int24_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Char_Nova_Nest1Char* novex_nest_Nova_Nest_char_Nest1Char25_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Char_Nova_Nest1Char_char_Nest1Char_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int26_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool27_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int28_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Char_Nova_Nest1Char* novex_nest_Nova_Nest_char_Nest1Char29_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Char_Nova_Nest1Char_char_Nest1Char_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int30_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool31_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool32_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool33_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool34_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool35_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool36_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool37_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool38_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool39_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool40_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool41_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool42_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool43_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool44_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool45_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool46_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int47_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int48_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool49_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool50_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool51_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool52_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool53_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool54_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool55_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool56_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool57_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool58_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int59_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int60_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int61_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int62_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int63_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool64_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool65_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int66_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool67_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long68_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long69_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int70_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long71_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int72_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long73_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int74_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int75_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int76_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int77_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long78_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long79_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int80_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long81_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int82_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long83_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int84_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long85_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int86_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int87_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int88_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int89_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long90_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long91_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int92_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long93_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int94_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long95_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int96_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long97_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int98_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int99_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int100_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int101_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long102_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long103_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int104_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long105_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int106_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long107_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int108_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long109_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int110_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int111_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int112_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int113_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long114_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long115_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int116_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long117_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int118_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int119_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int120_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int121_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long122_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long123_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int124_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long125_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int126_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int127_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int128_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int129_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long130_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long131_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int132_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long133_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int134_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int135_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int136_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int137_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long138_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long139_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int140_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long141_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int142_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int143_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int144_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int145_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long146_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long147_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int148_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long149_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int150_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int151_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int152_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int153_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long154_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long155_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int156_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long157_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int158_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int159_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int160_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int161_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool162_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool163_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool164_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool165_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool166_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool167_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool168_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool169_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool170_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool171_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool172_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool173_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool174_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool175_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool176_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool177_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool178_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool179_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool180_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool181_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool182_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool183_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long184_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long185_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long186_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Byte_Nova_Nest1Byte* novex_nest_Nova_Nest_char_Nest1Byte187_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Byte_Nova_Nest1Byte_char_Nest1Byte_Nova_construct(0,
	obj);
}

novex_nest_Double_Nova_Nest1Double* novex_nest_Nova_Nest_double_Nest1Double188_static_Nova_expect(novex_nest_Nova_Nest* this, double obj)
{
	return novex_nest_Double_Nova_Nest1Double_double_Nest1Double_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool189_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool190_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool191_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool192_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool193_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool194_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool195_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool196_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool197_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool198_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool199_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool200_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool201_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool202_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool203_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool204_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool205_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool206_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool207_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool208_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool209_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool210_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool211_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool212_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool213_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool214_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool215_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool216_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool217_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool218_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool219_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool220_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool221_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool222_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long223_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int224_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int225_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int226_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long227_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int228_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int229_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int230_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long231_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int232_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int233_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int234_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Nova_Nest_long_long_Nest1Long235_static_Nova_expect(novex_nest_Nova_Nest* this, long_long obj)
{
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int236_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int237_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Nova_Nest_int_Nest1Int238_static_Nova_expect(novex_nest_Nova_Nest* this, int obj)
{
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(0,
	obj);
}

novex_nest_Byte_Nova_Nest1Byte* novex_nest_Nova_Nest_char_Nest1Byte239_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Byte_Nova_Nest1Byte_char_Nest1Byte_Nova_construct(0,
	obj);
}

novex_nest_Float_Nova_Nest1Float* novex_nest_Nova_Nest_float_Nest1Float240_static_Nova_expect(novex_nest_Nova_Nest* this, float obj)
{
	return novex_nest_Float_Nova_Nest1Float_float_Nest1Float_Nova_construct(0,
	obj);
}

novex_nest_Float_Nova_Nest1Float* novex_nest_Nova_Nest_float_Nest1Float241_static_Nova_expect(novex_nest_Nova_Nest* this, float obj)
{
	return novex_nest_Float_Nova_Nest1Float_float_Nest1Float_Nova_construct(0,
	obj);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Nova_Nest_char_Nest1Bool242_static_Nova_expect(novex_nest_Nova_Nest* this, char obj)
{
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(0,
	obj);
}

void novex_nest_Nova_Nest_Nova_super(novex_nest_Nova_Nest* this)
{
	this->prv->novex_nest_Nova_Nest_Nova_data = (nova_Nova_Object*)nova_null;
}

nova_io_Nova_FancyOutputStream* novex_nest_Bool_Nova_Nest1Bool_Nova_out;
char novex_nest_Bool_Nova_Nest1Bool_Nova_init_static_inited = 0;
void novex_nest_Bool_Nova_Nest1Bool_Nova_init_static()
{
	if (!novex_nest_Bool_Nova_Nest1Bool_Nova_init_static_inited) {
		novex_nest_Bool_Nova_Nest1Bool_Nova_init_static_inited = 1;
		{
		}
		{
		}
	}
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_construct(novex_nest_Bool_Nova_Nest1Bool* this, char data)
{
	CCLASS_NEW(novex_nest_Bool_Nova_Nest1Bool, this);
	this->vtable = &novex_nest_Bool_Nova_Nest1Bool_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	novex_nest_Bool_Nova_Nest1Bool_void_Nova_super(this);
	
	return novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_this((novex_nest_Bool_Nova_Nest1Bool*)(this),
	data);
}

void novex_nest_Bool_Nova_Nest1Bool_void_Nova_destroy(novex_nest_Bool_Nova_Nest1Bool** this)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE((*this)->prv);
	nova_meta_Nova_Class_Nova_destroy(&(*this)->novex_nest_Bool_Nova_Nest1Bool_Nova_class);
	
	NOVA_FREE(*this);
}

novex_nest_Bool_Nova_Nest1Bool* novex_nest_Bool_Nova_Nest1Bool_char_Nest1Bool_Nova_this(novex_nest_Bool_Nova_Nest1Bool* this, char data) {
	this->prv->novex_nest_Bool_Nova_Nest1Bool_Nova_data = data;
	this->prv->novex_nest_Bool_Nova_Nest1Bool_Nova_data = data;
	return this;
}
char novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe(novex_nest_Bool_Nova_Nest1Bool* this, char other, nova_Nova_String* message)
{
	return 1;
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)message);
	if (other != this->prv->novex_nest_Bool_Nova_Nest1Bool_Nova_data)
	{
		nova_Nova_String* l2_Nova_nova_local_0 = (nova_Nova_String*)nova_null;
		
		message = (nova_Nova_String*)((l2_Nova_nova_local_0 = message) != (nova_Nova_String*)nova_null ? (nova_Nova_Object*)l2_Nova_nova_local_0 : (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_Nova_Bool_static_Nova_toString((nova_primitive_Nova_Bool*)(0),
									this->prv->novex_nest_Bool_Nova_Nest1Bool_Nova_data)),
									(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
													(char*)(" != "))),
											(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_Nova_Bool_static_Nova_toString((nova_primitive_Nova_Bool*)(0),
																		other)),
																		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
																				(char*)("")))))))),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))))))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != "))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_Nova_Bool_static_Nova_toString((nova_primitive_Nova_Bool*)(0),
													other)),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))),
								(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
										(char*)("")))))))));
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
		return 0;
	}
	return 1;
}

char novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toNotBe(novex_nest_Bool_Nova_Nest1Bool* this, char other, nova_Nova_String* message)
{
	return 1;
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)message);
	if (other == this->prv->novex_nest_Bool_Nova_Nest1Bool_Nova_data)
	{
		nova_Nova_String* l2_Nova_nova_local_0 = (nova_Nova_String*)nova_null;
		
		message = (nova_Nova_String*)((l2_Nova_nova_local_0 = message) != (nova_Nova_String*)nova_null ? (nova_Nova_Object*)l2_Nova_nova_local_0 : (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_Nova_Bool_static_Nova_toString((nova_primitive_Nova_Bool*)(0),
									this->prv->novex_nest_Bool_Nova_Nest1Bool_Nova_data)),
									(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
													(char*)(" == "))),
											(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_Nova_Bool_static_Nova_toString((nova_primitive_Nova_Bool*)(0),
																		other)),
																		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
																				(char*)("")))))))),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))))))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" == "))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_Nova_Bool_static_Nova_toString((nova_primitive_Nova_Bool*)(0),
													other)),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))),
								(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
										(char*)("")))))))));
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
		return 0;
	}
	return 1;
}

void novex_nest_Bool_Nova_Nest1Bool_Class_String_int_void_Nova_toThrow(novex_nest_Bool_Nova_Nest1Bool* this, nova_meta_Nova_Class* exceptionType, nova_Nova_String* message, int soft)
{
	/*l1_closure968_Nova_func*/nova_funcStruct* l1_Nova_func = (/*l1_closure968_Nova_func*/nova_funcStruct*)nova_null;
	
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
					(char*)("Did not throw exception type "))),
			(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((exceptionType)))),
					(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("")))))) : (nova_Nova_Object*)message);
	soft = (int)(soft == (int)(intptr_t)nova_null ? 0 : soft);
	l1_Nova_func = (/*l1_closure968_Nova_func*/nova_funcStruct*)(nova_primitive_Nova_Bool_Nova_construct(0,
	this->prv->novex_nest_Bool_Nova_Nest1Bool_Nova_data));
	if (!nova_exception_Nova_Exception_static_Nova_catchType((nova_exception_Nova_Exception*)(0),
			(nova_exception_Nova_Exception_closure1353_Nova_func)(l1_Nova_func->func), l1_Nova_func->ref, l1_Nova_func->context,
			exceptionType,
			soft,
			(int)(intptr_t)nova_null))
	{
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
	}
}

void novex_nest_Bool_Nova_Nest1Bool_Class_String_int_void_Nova_toNotThrow(novex_nest_Bool_Nova_Nest1Bool* this, nova_meta_Nova_Class* exceptionType, nova_Nova_String* message, int soft)
{
	/*l1_closure972_Nova_func*/nova_funcStruct* l1_Nova_func = (/*l1_closure972_Nova_func*/nova_funcStruct*)nova_null;
	
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
					(char*)("Threw exception type "))),
			(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((exceptionType)))),
					(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("")))))) : (nova_Nova_Object*)message);
	soft = (int)(soft == (int)(intptr_t)nova_null ? 0 : soft);
	l1_Nova_func = (/*l1_closure972_Nova_func*/nova_funcStruct*)(nova_primitive_Nova_Bool_Nova_construct(0,
	this->prv->novex_nest_Bool_Nova_Nest1Bool_Nova_data));
	if (nova_exception_Nova_Exception_static_Nova_catchType((nova_exception_Nova_Exception*)(0),
			(nova_exception_Nova_Exception_closure1353_Nova_func)(l1_Nova_func->func), l1_Nova_func->ref, l1_Nova_func->context,
			exceptionType,
			soft,
			(int)(intptr_t)nova_null))
	{
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
	}
}

void novex_nest_Bool_Nova_Nest1Bool_String_void_static_Nova_fail(novex_nest_Bool_Nova_Nest1Bool* this, nova_Nova_String* message)
{
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)nova_Nova_String_1_Nova_construct(0,
			(char*)("Failure")) : (nova_Nova_Object*)message);
	THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
	message), 0);
}

novex_nest_Nova_Nest* novex_nest_Bool_Nova_Nest1Bool_T_Nest0_static_Nova_expect(novex_nest_Bool_Nova_Nest1Bool* this, nova_Nova_Object* obj)
{
	return novex_nest_Nova_Nest_Nova_construct(0,
		(nova_Nova_Object*)(obj));
}

novex_nest_Nova_Nest* novex_nest_Bool_Nova_Nest1Bool_null_Nest1_static_Nova_expect(novex_nest_Bool_Nova_Nest1Bool* this, novex_nest_Bool_Nova_Nest1Bool_closure263_Nova_func novex_nest_Bool_Nova_Nest1Bool_Nova_func, void* novex_nest_Bool_Nova_Nest1Bool_ref_Nova_func, void* novex_nest_Bool_Nova_Nest1Bool_context_Nova_func)
{
	return novex_nest_Nova_Nest_Nova_construct(0,
		(nova_Nova_Object*)nova_get_funcStruct3(novex_nest_Bool_Nova_Nest1Bool_Nova_func, novex_nest_Bool_Nova_Nest1Bool_ref_Nova_func, novex_nest_Bool_Nova_Nest1Bool_context_Nova_func));
	return novex_nest_Nova_Nest_Nova_construct(0,
		(nova_Nova_Object*)nova_get_funcStruct3(novex_nest_Bool_Nova_Nest1Bool_Nova_func, novex_nest_Bool_Nova_Nest1Bool_ref_Nova_func, novex_nest_Bool_Nova_Nest1Bool_context_Nova_func));
}

void novex_nest_Bool_Nova_Nest1Bool_String_null_void_static_Nova_test(novex_nest_Bool_Nova_Nest1Bool* this, nova_Nova_String* description, novex_nest_Bool_Nova_Nest1Bool_closure265_Nova_testCode novex_nest_Bool_Nova_Nest1Bool_Nova_testCode, void* novex_nest_Bool_Nova_Nest1Bool_ref_Nova_testCode, void* novex_nest_Bool_Nova_Nest1Bool_context_Nova_testCode)
{
	novex_nest_Bool_Nova_Nest1Bool_Nova_testCode(novex_nest_Bool_Nova_Nest1Bool_ref_Nova_testCode,
	novex_nest_Bool_Nova_Nest1Bool_context_Nova_testCode);
}

void novex_nest_Bool_Nova_Nest1Bool_void_Nova_super(novex_nest_Bool_Nova_Nest1Bool* this)
{
	this->novex_nest_Bool_Nova_Nest1Bool_Nova_class = (nova_meta_Nova_Class*)nova_null;
	this->prv->novex_nest_Bool_Nova_Nest1Bool_Nova_data = 0;
	novex_nest_Bool_Nova_Nest1Bool_Nova_out = nova_io_Nova_FancyOutputStream_Nova_construct(0,
		0,
		(int)(intptr_t)nova_null,
	0);
	novex_nest_Bool_Nova_Nest1Bool_Nova_out = nova_io_Nova_FancyOutputStream_Nova_construct(0,
		0,
		(int)(intptr_t)nova_null,
	0);
}

nova_io_Nova_FancyOutputStream* novex_nest_Int_Nova_Nest1Int_Nova_out;
char novex_nest_Int_Nova_Nest1Int_Nova_init_static_inited = 0;
void novex_nest_Int_Nova_Nest1Int_Nova_init_static()
{
	if (!novex_nest_Int_Nova_Nest1Int_Nova_init_static_inited) {
		novex_nest_Int_Nova_Nest1Int_Nova_init_static_inited = 1;
		{
		}
		{
		}
	}
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_construct(novex_nest_Int_Nova_Nest1Int* this, int data)
{
	CCLASS_NEW(novex_nest_Int_Nova_Nest1Int, this);
	this->vtable = &novex_nest_Int_Nova_Nest1Int_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	novex_nest_Int_Nova_Nest1Int_void_Nova_super(this);
	
	return novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_this((novex_nest_Int_Nova_Nest1Int*)(this),
	data);
}

void novex_nest_Int_Nova_Nest1Int_void_Nova_destroy(novex_nest_Int_Nova_Nest1Int** this)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE((*this)->prv);
	nova_meta_Nova_Class_Nova_destroy(&(*this)->novex_nest_Int_Nova_Nest1Int_Nova_class);
	
	NOVA_FREE(*this);
}

novex_nest_Int_Nova_Nest1Int* novex_nest_Int_Nova_Nest1Int_int_Nest1Int_Nova_this(novex_nest_Int_Nova_Nest1Int* this, int data) {
	this->prv->novex_nest_Int_Nova_Nest1Int_Nova_data = data;
	this->prv->novex_nest_Int_Nova_Nest1Int_Nova_data = data;
	return this;
}
char novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe(novex_nest_Int_Nova_Nest1Int* this, int other, nova_Nova_String* message)
{
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)message);
	if (other != this->prv->novex_nest_Int_Nova_Nest1Int_Nova_data)
	{
		nova_Nova_String* l2_Nova_nova_local_0 = (nova_Nova_String*)nova_null;
		
		message = (nova_Nova_String*)((l2_Nova_nova_local_0 = message) != (nova_Nova_String*)nova_null ? (nova_Nova_Object*)l2_Nova_nova_local_0 : (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
									this->prv->novex_nest_Int_Nova_Nest1Int_Nova_data)),
									(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
													(char*)(" != "))),
											(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
																		other)),
																		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
																				(char*)("")))))))),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))))))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != "))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
													other)),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))),
								(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
										(char*)("")))))))));
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
		return 0;
	}
	return 1;
}

char novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toNotBe(novex_nest_Int_Nova_Nest1Int* this, int other, nova_Nova_String* message)
{
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)message);
	if (other == this->prv->novex_nest_Int_Nova_Nest1Int_Nova_data)
	{
		nova_Nova_String* l2_Nova_nova_local_0 = (nova_Nova_String*)nova_null;
		
		message = (nova_Nova_String*)((l2_Nova_nova_local_0 = message) != (nova_Nova_String*)nova_null ? (nova_Nova_Object*)l2_Nova_nova_local_0 : (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
									this->prv->novex_nest_Int_Nova_Nest1Int_Nova_data)),
									(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
													(char*)(" == "))),
											(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
																		other)),
																		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
																				(char*)("")))))))),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))))))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" == "))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
													other)),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))),
								(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
										(char*)("")))))))));
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
		return 0;
	}
	return 1;
}

char novex_nest_Int_Nova_Nest1Int_double_double_String_char_Nova_toBeWithinToleranceOf(novex_nest_Int_Nova_Nest1Int* this, double target, double tolerance, nova_Nova_String* message)
{
	tolerance = (double)(tolerance == (int)(intptr_t)nova_null ? 0.0001 : tolerance);
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)message);
	if (!nova_primitive_number_Nova_Double_static_Nova_withinTolerance((nova_primitive_number_Nova_Double*)(0),
			(double)((double)this->prv->novex_nest_Int_Nova_Nest1Int_Nova_data),
			target,
	tolerance))
	{
		nova_Nova_String* l2_Nova_nova_local_0 = (nova_Nova_String*)nova_null;
		
		message = (nova_Nova_String*)((l2_Nova_nova_local_0 = message) != (nova_Nova_String*)nova_null ? (nova_Nova_Object*)l2_Nova_nova_local_0 : (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
									this->prv->novex_nest_Int_Nova_Nest1Int_Nova_data)),
									(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
													(char*)(" not within tolerance of "))),
											(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Double_static_Nova_toString((nova_primitive_number_Nova_Double*)(0),
															(target))),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))))))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" not within tolerance of "))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Double_static_Nova_toString((nova_primitive_number_Nova_Double*)(0),
										(target))),
								(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
										(char*)("")))))))));
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
		return 0;
	}
	return 1;
}

void novex_nest_Int_Nova_Nest1Int_Class_String_int_void_Nova_toThrow(novex_nest_Int_Nova_Nest1Int* this, nova_meta_Nova_Class* exceptionType, nova_Nova_String* message, int soft)
{
	/*l1_closure986_Nova_func*/nova_funcStruct* l1_Nova_func = (/*l1_closure986_Nova_func*/nova_funcStruct*)nova_null;
	
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
					(char*)("Did not throw exception type "))),
			(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((exceptionType)))),
					(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("")))))) : (nova_Nova_Object*)message);
	soft = (int)(soft == (int)(intptr_t)nova_null ? 0 : soft);
	l1_Nova_func = (/*l1_closure986_Nova_func*/nova_funcStruct*)(nova_primitive_number_Nova_Int_Nova_construct(0,
	this->prv->novex_nest_Int_Nova_Nest1Int_Nova_data));
	if (!nova_exception_Nova_Exception_static_Nova_catchType((nova_exception_Nova_Exception*)(0),
			(nova_exception_Nova_Exception_closure1353_Nova_func)(l1_Nova_func->func), l1_Nova_func->ref, l1_Nova_func->context,
			exceptionType,
			soft,
			(int)(intptr_t)nova_null))
	{
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
	}
}

void novex_nest_Int_Nova_Nest1Int_Class_String_int_void_Nova_toNotThrow(novex_nest_Int_Nova_Nest1Int* this, nova_meta_Nova_Class* exceptionType, nova_Nova_String* message, int soft)
{
	/*l1_closure990_Nova_func*/nova_funcStruct* l1_Nova_func = (/*l1_closure990_Nova_func*/nova_funcStruct*)nova_null;
	
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
					(char*)("Threw exception type "))),
			(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((exceptionType)))),
					(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("")))))) : (nova_Nova_Object*)message);
	soft = (int)(soft == (int)(intptr_t)nova_null ? 0 : soft);
	l1_Nova_func = (/*l1_closure990_Nova_func*/nova_funcStruct*)(nova_primitive_number_Nova_Int_Nova_construct(0,
	this->prv->novex_nest_Int_Nova_Nest1Int_Nova_data));
	if (nova_exception_Nova_Exception_static_Nova_catchType((nova_exception_Nova_Exception*)(0),
			(nova_exception_Nova_Exception_closure1353_Nova_func)(l1_Nova_func->func), l1_Nova_func->ref, l1_Nova_func->context,
			exceptionType,
			soft,
			(int)(intptr_t)nova_null))
	{
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
	}
}

void novex_nest_Int_Nova_Nest1Int_String_void_static_Nova_fail(novex_nest_Int_Nova_Nest1Int* this, nova_Nova_String* message)
{
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)nova_Nova_String_1_Nova_construct(0,
			(char*)("Failure")) : (nova_Nova_Object*)message);
	THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
	message), 0);
}

novex_nest_Nova_Nest* novex_nest_Int_Nova_Nest1Int_T_Nest0_static_Nova_expect(novex_nest_Int_Nova_Nest1Int* this, nova_Nova_Object* obj)
{
	return novex_nest_Nova_Nest_Nova_construct(0,
		(nova_Nova_Object*)(obj));
}

novex_nest_Nova_Nest* novex_nest_Int_Nova_Nest1Int_null_Nest1_static_Nova_expect(novex_nest_Int_Nova_Nest1Int* this, novex_nest_Int_Nova_Nest1Int_closure348_Nova_func novex_nest_Int_Nova_Nest1Int_Nova_func, void* novex_nest_Int_Nova_Nest1Int_ref_Nova_func, void* novex_nest_Int_Nova_Nest1Int_context_Nova_func)
{
	return novex_nest_Nova_Nest_Nova_construct(0,
		(nova_Nova_Object*)nova_get_funcStruct3(novex_nest_Int_Nova_Nest1Int_Nova_func, novex_nest_Int_Nova_Nest1Int_ref_Nova_func, novex_nest_Int_Nova_Nest1Int_context_Nova_func));
}

void novex_nest_Int_Nova_Nest1Int_String_null_void_static_Nova_test(novex_nest_Int_Nova_Nest1Int* this, nova_Nova_String* description, novex_nest_Int_Nova_Nest1Int_closure350_Nova_testCode novex_nest_Int_Nova_Nest1Int_Nova_testCode, void* novex_nest_Int_Nova_Nest1Int_ref_Nova_testCode, void* novex_nest_Int_Nova_Nest1Int_context_Nova_testCode)
{
	novex_nest_Int_Nova_Nest1Int_Nova_testCode(novex_nest_Int_Nova_Nest1Int_ref_Nova_testCode,
	novex_nest_Int_Nova_Nest1Int_context_Nova_testCode);
}

void novex_nest_Int_Nova_Nest1Int_void_Nova_super(novex_nest_Int_Nova_Nest1Int* this)
{
	this->novex_nest_Int_Nova_Nest1Int_Nova_class = (nova_meta_Nova_Class*)nova_null;
	this->prv->novex_nest_Int_Nova_Nest1Int_Nova_data = 0;
	novex_nest_Int_Nova_Nest1Int_Nova_out = nova_io_Nova_FancyOutputStream_Nova_construct(0,
		0,
		(int)(intptr_t)nova_null,
	0);
}

nova_io_Nova_FancyOutputStream* novex_nest_Long_Nova_Nest1Long_Nova_out;
char novex_nest_Long_Nova_Nest1Long_Nova_init_static_inited = 0;
void novex_nest_Long_Nova_Nest1Long_Nova_init_static()
{
	if (!novex_nest_Long_Nova_Nest1Long_Nova_init_static_inited) {
		novex_nest_Long_Nova_Nest1Long_Nova_init_static_inited = 1;
		{
		}
		{
		}
	}
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_construct(novex_nest_Long_Nova_Nest1Long* this, long_long data)
{
	CCLASS_NEW(novex_nest_Long_Nova_Nest1Long, this);
	this->vtable = &novex_nest_Long_Nova_Nest1Long_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	novex_nest_Long_Nova_Nest1Long_void_Nova_super(this);
	
	return novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_this((novex_nest_Long_Nova_Nest1Long*)(this),
	data);
}

void novex_nest_Long_Nova_Nest1Long_void_Nova_destroy(novex_nest_Long_Nova_Nest1Long** this)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE((*this)->prv);
	nova_meta_Nova_Class_Nova_destroy(&(*this)->novex_nest_Long_Nova_Nest1Long_Nova_class);
	
	NOVA_FREE(*this);
}

novex_nest_Long_Nova_Nest1Long* novex_nest_Long_Nova_Nest1Long_long_long_Nest1Long_Nova_this(novex_nest_Long_Nova_Nest1Long* this, long_long data) {
	this->prv->novex_nest_Long_Nova_Nest1Long_Nova_data = data;
	this->prv->novex_nest_Long_Nova_Nest1Long_Nova_data = data;
	return this;
}
char novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe(novex_nest_Long_Nova_Nest1Long* this, long_long other, nova_Nova_String* message)
{
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)message);
	if (other != this->prv->novex_nest_Long_Nova_Nest1Long_Nova_data)
	{
		nova_Nova_String* l2_Nova_nova_local_0 = (nova_Nova_String*)nova_null;
		
		message = (nova_Nova_String*)((l2_Nova_nova_local_0 = message) != (nova_Nova_String*)nova_null ? (nova_Nova_Object*)l2_Nova_nova_local_0 : (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
									this->prv->novex_nest_Long_Nova_Nest1Long_Nova_data)),
									(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
													(char*)(" != "))),
											(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
																		other)),
																		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
																				(char*)("")))))))),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))))))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != "))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
													other)),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))),
								(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
										(char*)("")))))))));
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
		return 0;
	}
	return 1;
}

char novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toNotBe(novex_nest_Long_Nova_Nest1Long* this, long_long other, nova_Nova_String* message)
{
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)message);
	if (other == this->prv->novex_nest_Long_Nova_Nest1Long_Nova_data)
	{
		nova_Nova_String* l2_Nova_nova_local_0 = (nova_Nova_String*)nova_null;
		
		message = (nova_Nova_String*)((l2_Nova_nova_local_0 = message) != (nova_Nova_String*)nova_null ? (nova_Nova_Object*)l2_Nova_nova_local_0 : (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
									this->prv->novex_nest_Long_Nova_Nest1Long_Nova_data)),
									(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
													(char*)(" == "))),
											(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
																		other)),
																		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
																				(char*)("")))))))),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))))))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" == "))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
													other)),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))),
								(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
										(char*)("")))))))));
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
		return 0;
	}
	return 1;
}

char novex_nest_Long_Nova_Nest1Long_double_double_String_char_Nova_toBeWithinToleranceOf(novex_nest_Long_Nova_Nest1Long* this, double target, double tolerance, nova_Nova_String* message)
{
	tolerance = (double)(tolerance == (int)(intptr_t)nova_null ? 0.0001 : tolerance);
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)message);
	if (!nova_primitive_number_Nova_Double_static_Nova_withinTolerance((nova_primitive_number_Nova_Double*)(0),
			(double)((double)this->prv->novex_nest_Long_Nova_Nest1Long_Nova_data),
			target,
	tolerance))
	{
		nova_Nova_String* l2_Nova_nova_local_0 = (nova_Nova_String*)nova_null;
		
		message = (nova_Nova_String*)((l2_Nova_nova_local_0 = message) != (nova_Nova_String*)nova_null ? (nova_Nova_Object*)l2_Nova_nova_local_0 : (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
									this->prv->novex_nest_Long_Nova_Nest1Long_Nova_data)),
									(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
													(char*)(" not within tolerance of "))),
											(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Double_static_Nova_toString((nova_primitive_number_Nova_Double*)(0),
															(target))),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))))))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" not within tolerance of "))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Double_static_Nova_toString((nova_primitive_number_Nova_Double*)(0),
										(target))),
								(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
										(char*)("")))))))));
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
		return 0;
	}
	return 1;
}

void novex_nest_Long_Nova_Nest1Long_Class_String_int_void_Nova_toThrow(novex_nest_Long_Nova_Nest1Long* this, nova_meta_Nova_Class* exceptionType, nova_Nova_String* message, int soft)
{
	/*l1_closure999_Nova_func*/nova_funcStruct* l1_Nova_func = (/*l1_closure999_Nova_func*/nova_funcStruct*)nova_null;
	
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
					(char*)("Did not throw exception type "))),
			(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((exceptionType)))),
					(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("")))))) : (nova_Nova_Object*)message);
	soft = (int)(soft == (int)(intptr_t)nova_null ? 0 : soft);
	l1_Nova_func = (/*l1_closure999_Nova_func*/nova_funcStruct*)(nova_primitive_number_Nova_Long_Nova_construct(0,
	this->prv->novex_nest_Long_Nova_Nest1Long_Nova_data));
	if (!nova_exception_Nova_Exception_static_Nova_catchType((nova_exception_Nova_Exception*)(0),
			(nova_exception_Nova_Exception_closure1353_Nova_func)(l1_Nova_func->func), l1_Nova_func->ref, l1_Nova_func->context,
			exceptionType,
			soft,
			(int)(intptr_t)nova_null))
	{
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
	}
}

void novex_nest_Long_Nova_Nest1Long_Class_String_int_void_Nova_toNotThrow(novex_nest_Long_Nova_Nest1Long* this, nova_meta_Nova_Class* exceptionType, nova_Nova_String* message, int soft)
{
	/*l1_closure1003_Nova_func*/nova_funcStruct* l1_Nova_func = (/*l1_closure1003_Nova_func*/nova_funcStruct*)nova_null;
	
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
					(char*)("Threw exception type "))),
			(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((exceptionType)))),
					(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("")))))) : (nova_Nova_Object*)message);
	soft = (int)(soft == (int)(intptr_t)nova_null ? 0 : soft);
	l1_Nova_func = (/*l1_closure1003_Nova_func*/nova_funcStruct*)(nova_primitive_number_Nova_Long_Nova_construct(0,
	this->prv->novex_nest_Long_Nova_Nest1Long_Nova_data));
	if (nova_exception_Nova_Exception_static_Nova_catchType((nova_exception_Nova_Exception*)(0),
			(nova_exception_Nova_Exception_closure1353_Nova_func)(l1_Nova_func->func), l1_Nova_func->ref, l1_Nova_func->context,
			exceptionType,
			soft,
			(int)(intptr_t)nova_null))
	{
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
	}
}

void novex_nest_Long_Nova_Nest1Long_String_void_static_Nova_fail(novex_nest_Long_Nova_Nest1Long* this, nova_Nova_String* message)
{
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)nova_Nova_String_1_Nova_construct(0,
			(char*)("Failure")) : (nova_Nova_Object*)message);
	THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
	message), 0);
}

novex_nest_Nova_Nest* novex_nest_Long_Nova_Nest1Long_T_Nest0_static_Nova_expect(novex_nest_Long_Nova_Nest1Long* this, nova_Nova_Object* obj)
{
	return novex_nest_Nova_Nest_Nova_construct(0,
		(nova_Nova_Object*)(obj));
}

novex_nest_Nova_Nest* novex_nest_Long_Nova_Nest1Long_null_Nest1_static_Nova_expect(novex_nest_Long_Nova_Nest1Long* this, novex_nest_Long_Nova_Nest1Long_closure352_Nova_func novex_nest_Long_Nova_Nest1Long_Nova_func, void* novex_nest_Long_Nova_Nest1Long_ref_Nova_func, void* novex_nest_Long_Nova_Nest1Long_context_Nova_func)
{
	return novex_nest_Nova_Nest_Nova_construct(0,
		(nova_Nova_Object*)nova_get_funcStruct3(novex_nest_Long_Nova_Nest1Long_Nova_func, novex_nest_Long_Nova_Nest1Long_ref_Nova_func, novex_nest_Long_Nova_Nest1Long_context_Nova_func));
}

void novex_nest_Long_Nova_Nest1Long_String_null_void_static_Nova_test(novex_nest_Long_Nova_Nest1Long* this, nova_Nova_String* description, novex_nest_Long_Nova_Nest1Long_closure354_Nova_testCode novex_nest_Long_Nova_Nest1Long_Nova_testCode, void* novex_nest_Long_Nova_Nest1Long_ref_Nova_testCode, void* novex_nest_Long_Nova_Nest1Long_context_Nova_testCode)
{
	novex_nest_Long_Nova_Nest1Long_Nova_testCode(novex_nest_Long_Nova_Nest1Long_ref_Nova_testCode,
	novex_nest_Long_Nova_Nest1Long_context_Nova_testCode);
}

void novex_nest_Long_Nova_Nest1Long_void_Nova_super(novex_nest_Long_Nova_Nest1Long* this)
{
	this->novex_nest_Long_Nova_Nest1Long_Nova_class = (nova_meta_Nova_Class*)nova_null;
	this->prv->novex_nest_Long_Nova_Nest1Long_Nova_data = 0;
	novex_nest_Long_Nova_Nest1Long_Nova_out = nova_io_Nova_FancyOutputStream_Nova_construct(0,
		0,
		(int)(intptr_t)nova_null,
	0);
}

nova_io_Nova_FancyOutputStream* novex_nest_Char_Nova_Nest1Char_Nova_out;
char novex_nest_Char_Nova_Nest1Char_Nova_init_static_inited = 0;
void novex_nest_Char_Nova_Nest1Char_Nova_init_static()
{
	if (!novex_nest_Char_Nova_Nest1Char_Nova_init_static_inited) {
		novex_nest_Char_Nova_Nest1Char_Nova_init_static_inited = 1;
		{
		}
		{
		}
	}
}

novex_nest_Char_Nova_Nest1Char* novex_nest_Char_Nova_Nest1Char_char_Nest1Char_Nova_construct(novex_nest_Char_Nova_Nest1Char* this, char data)
{
	CCLASS_NEW(novex_nest_Char_Nova_Nest1Char, this);
	this->vtable = &novex_nest_Char_Nova_Nest1Char_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	novex_nest_Char_Nova_Nest1Char_void_Nova_super(this);
	
	return novex_nest_Char_Nova_Nest1Char_char_Nest1Char_Nova_this((novex_nest_Char_Nova_Nest1Char*)(this),
	data);
}

void novex_nest_Char_Nova_Nest1Char_void_Nova_destroy(novex_nest_Char_Nova_Nest1Char** this)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE((*this)->prv);
	nova_meta_Nova_Class_Nova_destroy(&(*this)->novex_nest_Char_Nova_Nest1Char_Nova_class);
	
	NOVA_FREE(*this);
}

novex_nest_Char_Nova_Nest1Char* novex_nest_Char_Nova_Nest1Char_char_Nest1Char_Nova_this(novex_nest_Char_Nova_Nest1Char* this, char data) {
	this->prv->novex_nest_Char_Nova_Nest1Char_Nova_data = data;
	this->prv->novex_nest_Char_Nova_Nest1Char_Nova_data = data;
	return this;
}
char novex_nest_Char_Nova_Nest1Char_char_String_char_Nova_toBe(novex_nest_Char_Nova_Nest1Char* this, char other, nova_Nova_String* message)
{
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)message);
	if (other != this->prv->novex_nest_Char_Nova_Nest1Char_Nova_data)
	{
		nova_Nova_String* l2_Nova_nova_local_0 = (nova_Nova_String*)nova_null;
		
		message = (nova_Nova_String*)((l2_Nova_nova_local_0 = message) != (nova_Nova_String*)nova_null ? (nova_Nova_Object*)l2_Nova_nova_local_0 : (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Char_static_Nova_toString((nova_primitive_number_Nova_Char*)(0),
									this->prv->novex_nest_Char_Nova_Nest1Char_Nova_data)),
									(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
													(char*)(" != "))),
											(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Char_static_Nova_toString((nova_primitive_number_Nova_Char*)(0),
																		other)),
																		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
																				(char*)("")))))))),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))))))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != "))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Char_static_Nova_toString((nova_primitive_number_Nova_Char*)(0),
													other)),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))),
								(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
										(char*)("")))))))));
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
		return 0;
	}
	return 1;
}

char novex_nest_Char_Nova_Nest1Char_char_String_char_Nova_toNotBe(novex_nest_Char_Nova_Nest1Char* this, char other, nova_Nova_String* message)
{
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)message);
	if (other == this->prv->novex_nest_Char_Nova_Nest1Char_Nova_data)
	{
		nova_Nova_String* l2_Nova_nova_local_0 = (nova_Nova_String*)nova_null;
		
		message = (nova_Nova_String*)((l2_Nova_nova_local_0 = message) != (nova_Nova_String*)nova_null ? (nova_Nova_Object*)l2_Nova_nova_local_0 : (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Char_static_Nova_toString((nova_primitive_number_Nova_Char*)(0),
									this->prv->novex_nest_Char_Nova_Nest1Char_Nova_data)),
									(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
													(char*)(" == "))),
											(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Char_static_Nova_toString((nova_primitive_number_Nova_Char*)(0),
																		other)),
																		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
																				(char*)("")))))))),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))))))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" == "))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Char_static_Nova_toString((nova_primitive_number_Nova_Char*)(0),
													other)),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))),
								(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
										(char*)("")))))))));
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
		return 0;
	}
	return 1;
}

char novex_nest_Char_Nova_Nest1Char_double_double_String_char_Nova_toBeWithinToleranceOf(novex_nest_Char_Nova_Nest1Char* this, double target, double tolerance, nova_Nova_String* message)
{
	tolerance = (double)(tolerance == (int)(intptr_t)nova_null ? 0.0001 : tolerance);
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)message);
	if (!nova_primitive_number_Nova_Double_static_Nova_withinTolerance((nova_primitive_number_Nova_Double*)(0),
			(double)((double)this->prv->novex_nest_Char_Nova_Nest1Char_Nova_data),
			target,
	tolerance))
	{
		nova_Nova_String* l2_Nova_nova_local_0 = (nova_Nova_String*)nova_null;
		
		message = (nova_Nova_String*)((l2_Nova_nova_local_0 = message) != (nova_Nova_String*)nova_null ? (nova_Nova_Object*)l2_Nova_nova_local_0 : (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Char_static_Nova_toString((nova_primitive_number_Nova_Char*)(0),
									this->prv->novex_nest_Char_Nova_Nest1Char_Nova_data)),
									(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
													(char*)(" not within tolerance of "))),
											(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Double_static_Nova_toString((nova_primitive_number_Nova_Double*)(0),
															(target))),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))))))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" not within tolerance of "))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Double_static_Nova_toString((nova_primitive_number_Nova_Double*)(0),
										(target))),
								(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
										(char*)("")))))))));
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
		return 0;
	}
	return 1;
}

void novex_nest_Char_Nova_Nest1Char_Class_String_int_void_Nova_toThrow(novex_nest_Char_Nova_Nest1Char* this, nova_meta_Nova_Class* exceptionType, nova_Nova_String* message, int soft)
{
	/*l1_closure1012_Nova_func*/nova_funcStruct* l1_Nova_func = (/*l1_closure1012_Nova_func*/nova_funcStruct*)nova_null;
	
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
					(char*)("Did not throw exception type "))),
			(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((exceptionType)))),
					(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("")))))) : (nova_Nova_Object*)message);
	soft = (int)(soft == (int)(intptr_t)nova_null ? 0 : soft);
	l1_Nova_func = (/*l1_closure1012_Nova_func*/nova_funcStruct*)(nova_primitive_number_Nova_Char_Nova_construct(0,
	this->prv->novex_nest_Char_Nova_Nest1Char_Nova_data));
	if (!nova_exception_Nova_Exception_static_Nova_catchType((nova_exception_Nova_Exception*)(0),
			(nova_exception_Nova_Exception_closure1353_Nova_func)(l1_Nova_func->func), l1_Nova_func->ref, l1_Nova_func->context,
			exceptionType,
			soft,
			(int)(intptr_t)nova_null))
	{
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
	}
}

void novex_nest_Char_Nova_Nest1Char_Class_String_int_void_Nova_toNotThrow(novex_nest_Char_Nova_Nest1Char* this, nova_meta_Nova_Class* exceptionType, nova_Nova_String* message, int soft)
{
	/*l1_closure1016_Nova_func*/nova_funcStruct* l1_Nova_func = (/*l1_closure1016_Nova_func*/nova_funcStruct*)nova_null;
	
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
					(char*)("Threw exception type "))),
			(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((exceptionType)))),
					(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("")))))) : (nova_Nova_Object*)message);
	soft = (int)(soft == (int)(intptr_t)nova_null ? 0 : soft);
	l1_Nova_func = (/*l1_closure1016_Nova_func*/nova_funcStruct*)(nova_primitive_number_Nova_Char_Nova_construct(0,
	this->prv->novex_nest_Char_Nova_Nest1Char_Nova_data));
	if (nova_exception_Nova_Exception_static_Nova_catchType((nova_exception_Nova_Exception*)(0),
			(nova_exception_Nova_Exception_closure1353_Nova_func)(l1_Nova_func->func), l1_Nova_func->ref, l1_Nova_func->context,
			exceptionType,
			soft,
			(int)(intptr_t)nova_null))
	{
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
	}
}

void novex_nest_Char_Nova_Nest1Char_String_void_static_Nova_fail(novex_nest_Char_Nova_Nest1Char* this, nova_Nova_String* message)
{
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)nova_Nova_String_1_Nova_construct(0,
			(char*)("Failure")) : (nova_Nova_Object*)message);
	THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
	message), 0);
}

novex_nest_Nova_Nest* novex_nest_Char_Nova_Nest1Char_T_Nest0_static_Nova_expect(novex_nest_Char_Nova_Nest1Char* this, nova_Nova_Object* obj)
{
	return novex_nest_Nova_Nest_Nova_construct(0,
		(nova_Nova_Object*)(obj));
}

novex_nest_Nova_Nest* novex_nest_Char_Nova_Nest1Char_null_Nest1_static_Nova_expect(novex_nest_Char_Nova_Nest1Char* this, novex_nest_Char_Nova_Nest1Char_closure356_Nova_func novex_nest_Char_Nova_Nest1Char_Nova_func, void* novex_nest_Char_Nova_Nest1Char_ref_Nova_func, void* novex_nest_Char_Nova_Nest1Char_context_Nova_func)
{
	return novex_nest_Nova_Nest_Nova_construct(0,
		(nova_Nova_Object*)nova_get_funcStruct3(novex_nest_Char_Nova_Nest1Char_Nova_func, novex_nest_Char_Nova_Nest1Char_ref_Nova_func, novex_nest_Char_Nova_Nest1Char_context_Nova_func));
}

void novex_nest_Char_Nova_Nest1Char_String_null_void_static_Nova_test(novex_nest_Char_Nova_Nest1Char* this, nova_Nova_String* description, novex_nest_Char_Nova_Nest1Char_closure358_Nova_testCode novex_nest_Char_Nova_Nest1Char_Nova_testCode, void* novex_nest_Char_Nova_Nest1Char_ref_Nova_testCode, void* novex_nest_Char_Nova_Nest1Char_context_Nova_testCode)
{
	novex_nest_Char_Nova_Nest1Char_Nova_testCode(novex_nest_Char_Nova_Nest1Char_ref_Nova_testCode,
	novex_nest_Char_Nova_Nest1Char_context_Nova_testCode);
}

void novex_nest_Char_Nova_Nest1Char_void_Nova_super(novex_nest_Char_Nova_Nest1Char* this)
{
	this->novex_nest_Char_Nova_Nest1Char_Nova_class = (nova_meta_Nova_Class*)nova_null;
	this->prv->novex_nest_Char_Nova_Nest1Char_Nova_data = 0;
	novex_nest_Char_Nova_Nest1Char_Nova_out = nova_io_Nova_FancyOutputStream_Nova_construct(0,
		0,
		(int)(intptr_t)nova_null,
	0);
}

nova_io_Nova_FancyOutputStream* novex_nest_Byte_Nova_Nest1Byte_Nova_out;
char novex_nest_Byte_Nova_Nest1Byte_Nova_init_static_inited = 0;
void novex_nest_Byte_Nova_Nest1Byte_Nova_init_static()
{
	if (!novex_nest_Byte_Nova_Nest1Byte_Nova_init_static_inited) {
		novex_nest_Byte_Nova_Nest1Byte_Nova_init_static_inited = 1;
		{
		}
		{
		}
	}
}

novex_nest_Byte_Nova_Nest1Byte* novex_nest_Byte_Nova_Nest1Byte_char_Nest1Byte_Nova_construct(novex_nest_Byte_Nova_Nest1Byte* this, char data)
{
	CCLASS_NEW(novex_nest_Byte_Nova_Nest1Byte, this);
	this->vtable = &novex_nest_Byte_Nova_Nest1Byte_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	novex_nest_Byte_Nova_Nest1Byte_void_Nova_super(this);
	
	return novex_nest_Byte_Nova_Nest1Byte_char_Nest1Byte_Nova_this((novex_nest_Byte_Nova_Nest1Byte*)(this),
	data);
}

void novex_nest_Byte_Nova_Nest1Byte_void_Nova_destroy(novex_nest_Byte_Nova_Nest1Byte** this)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE((*this)->prv);
	nova_meta_Nova_Class_Nova_destroy(&(*this)->novex_nest_Byte_Nova_Nest1Byte_Nova_class);
	
	NOVA_FREE(*this);
}

novex_nest_Byte_Nova_Nest1Byte* novex_nest_Byte_Nova_Nest1Byte_char_Nest1Byte_Nova_this(novex_nest_Byte_Nova_Nest1Byte* this, char data) {
	this->prv->novex_nest_Byte_Nova_Nest1Byte_Nova_data = data;
	this->prv->novex_nest_Byte_Nova_Nest1Byte_Nova_data = data;
	return this;
}
char novex_nest_Byte_Nova_Nest1Byte_char_String_char_Nova_toBe(novex_nest_Byte_Nova_Nest1Byte* this, char other, nova_Nova_String* message)
{
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)message);
	if (other != this->prv->novex_nest_Byte_Nova_Nest1Byte_Nova_data)
	{
		nova_Nova_String* l2_Nova_nova_local_0 = (nova_Nova_String*)nova_null;
		
		message = (nova_Nova_String*)((l2_Nova_nova_local_0 = message) != (nova_Nova_String*)nova_null ? (nova_Nova_Object*)l2_Nova_nova_local_0 : (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Byte_static_Nova_toString((nova_primitive_number_Nova_Byte*)(0),
									this->prv->novex_nest_Byte_Nova_Nest1Byte_Nova_data)),
									(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
													(char*)(" != "))),
											(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Byte_static_Nova_toString((nova_primitive_number_Nova_Byte*)(0),
																		other)),
																		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
																				(char*)("")))))))),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))))))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != "))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Byte_static_Nova_toString((nova_primitive_number_Nova_Byte*)(0),
													other)),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))),
								(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
										(char*)("")))))))));
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
		return 0;
	}
	return 1;
}

char novex_nest_Byte_Nova_Nest1Byte_char_String_char_Nova_toNotBe(novex_nest_Byte_Nova_Nest1Byte* this, char other, nova_Nova_String* message)
{
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)message);
	if (other == this->prv->novex_nest_Byte_Nova_Nest1Byte_Nova_data)
	{
		nova_Nova_String* l2_Nova_nova_local_0 = (nova_Nova_String*)nova_null;
		
		message = (nova_Nova_String*)((l2_Nova_nova_local_0 = message) != (nova_Nova_String*)nova_null ? (nova_Nova_Object*)l2_Nova_nova_local_0 : (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Byte_static_Nova_toString((nova_primitive_number_Nova_Byte*)(0),
									this->prv->novex_nest_Byte_Nova_Nest1Byte_Nova_data)),
									(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
													(char*)(" == "))),
											(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Byte_static_Nova_toString((nova_primitive_number_Nova_Byte*)(0),
																		other)),
																		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
																				(char*)("")))))))),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))))))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" == "))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Byte_static_Nova_toString((nova_primitive_number_Nova_Byte*)(0),
													other)),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))),
								(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
										(char*)("")))))))));
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
		return 0;
	}
	return 1;
}

char novex_nest_Byte_Nova_Nest1Byte_double_double_String_char_Nova_toBeWithinToleranceOf(novex_nest_Byte_Nova_Nest1Byte* this, double target, double tolerance, nova_Nova_String* message)
{
	tolerance = (double)(tolerance == (int)(intptr_t)nova_null ? 0.0001 : tolerance);
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)message);
	if (!nova_primitive_number_Nova_Double_static_Nova_withinTolerance((nova_primitive_number_Nova_Double*)(0),
			(double)((double)this->prv->novex_nest_Byte_Nova_Nest1Byte_Nova_data),
			target,
	tolerance))
	{
		nova_Nova_String* l2_Nova_nova_local_0 = (nova_Nova_String*)nova_null;
		
		message = (nova_Nova_String*)((l2_Nova_nova_local_0 = message) != (nova_Nova_String*)nova_null ? (nova_Nova_Object*)l2_Nova_nova_local_0 : (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Byte_static_Nova_toString((nova_primitive_number_Nova_Byte*)(0),
									this->prv->novex_nest_Byte_Nova_Nest1Byte_Nova_data)),
									(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
													(char*)(" not within tolerance of "))),
											(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Double_static_Nova_toString((nova_primitive_number_Nova_Double*)(0),
															(target))),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))))))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" not within tolerance of "))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Double_static_Nova_toString((nova_primitive_number_Nova_Double*)(0),
										(target))),
								(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
										(char*)("")))))))));
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
		return 0;
	}
	return 1;
}

void novex_nest_Byte_Nova_Nest1Byte_Class_String_int_void_Nova_toThrow(novex_nest_Byte_Nova_Nest1Byte* this, nova_meta_Nova_Class* exceptionType, nova_Nova_String* message, int soft)
{
	/*l1_closure1025_Nova_func*/nova_funcStruct* l1_Nova_func = (/*l1_closure1025_Nova_func*/nova_funcStruct*)nova_null;
	
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
					(char*)("Did not throw exception type "))),
			(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((exceptionType)))),
					(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("")))))) : (nova_Nova_Object*)message);
	soft = (int)(soft == (int)(intptr_t)nova_null ? 0 : soft);
	l1_Nova_func = (/*l1_closure1025_Nova_func*/nova_funcStruct*)(nova_primitive_number_Nova_Byte_Nova_construct(0,
	this->prv->novex_nest_Byte_Nova_Nest1Byte_Nova_data));
	if (!nova_exception_Nova_Exception_static_Nova_catchType((nova_exception_Nova_Exception*)(0),
			(nova_exception_Nova_Exception_closure1353_Nova_func)(l1_Nova_func->func), l1_Nova_func->ref, l1_Nova_func->context,
			exceptionType,
			soft,
			(int)(intptr_t)nova_null))
	{
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
	}
}

void novex_nest_Byte_Nova_Nest1Byte_Class_String_int_void_Nova_toNotThrow(novex_nest_Byte_Nova_Nest1Byte* this, nova_meta_Nova_Class* exceptionType, nova_Nova_String* message, int soft)
{
	/*l1_closure1029_Nova_func*/nova_funcStruct* l1_Nova_func = (/*l1_closure1029_Nova_func*/nova_funcStruct*)nova_null;
	
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
					(char*)("Threw exception type "))),
			(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((exceptionType)))),
					(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("")))))) : (nova_Nova_Object*)message);
	soft = (int)(soft == (int)(intptr_t)nova_null ? 0 : soft);
	l1_Nova_func = (/*l1_closure1029_Nova_func*/nova_funcStruct*)(nova_primitive_number_Nova_Byte_Nova_construct(0,
	this->prv->novex_nest_Byte_Nova_Nest1Byte_Nova_data));
	if (nova_exception_Nova_Exception_static_Nova_catchType((nova_exception_Nova_Exception*)(0),
			(nova_exception_Nova_Exception_closure1353_Nova_func)(l1_Nova_func->func), l1_Nova_func->ref, l1_Nova_func->context,
			exceptionType,
			soft,
			(int)(intptr_t)nova_null))
	{
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
	}
}

void novex_nest_Byte_Nova_Nest1Byte_String_void_static_Nova_fail(novex_nest_Byte_Nova_Nest1Byte* this, nova_Nova_String* message)
{
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)nova_Nova_String_1_Nova_construct(0,
			(char*)("Failure")) : (nova_Nova_Object*)message);
	THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
	message), 0);
}

novex_nest_Nova_Nest* novex_nest_Byte_Nova_Nest1Byte_T_Nest0_static_Nova_expect(novex_nest_Byte_Nova_Nest1Byte* this, nova_Nova_Object* obj)
{
	return novex_nest_Nova_Nest_Nova_construct(0,
		(nova_Nova_Object*)(obj));
}

novex_nest_Nova_Nest* novex_nest_Byte_Nova_Nest1Byte_null_Nest1_static_Nova_expect(novex_nest_Byte_Nova_Nest1Byte* this, novex_nest_Byte_Nova_Nest1Byte_closure412_Nova_func novex_nest_Byte_Nova_Nest1Byte_Nova_func, void* novex_nest_Byte_Nova_Nest1Byte_ref_Nova_func, void* novex_nest_Byte_Nova_Nest1Byte_context_Nova_func)
{
	return novex_nest_Nova_Nest_Nova_construct(0,
		(nova_Nova_Object*)nova_get_funcStruct3(novex_nest_Byte_Nova_Nest1Byte_Nova_func, novex_nest_Byte_Nova_Nest1Byte_ref_Nova_func, novex_nest_Byte_Nova_Nest1Byte_context_Nova_func));
}

void novex_nest_Byte_Nova_Nest1Byte_String_null_void_static_Nova_test(novex_nest_Byte_Nova_Nest1Byte* this, nova_Nova_String* description, novex_nest_Byte_Nova_Nest1Byte_closure414_Nova_testCode novex_nest_Byte_Nova_Nest1Byte_Nova_testCode, void* novex_nest_Byte_Nova_Nest1Byte_ref_Nova_testCode, void* novex_nest_Byte_Nova_Nest1Byte_context_Nova_testCode)
{
	novex_nest_Byte_Nova_Nest1Byte_Nova_testCode(novex_nest_Byte_Nova_Nest1Byte_ref_Nova_testCode,
	novex_nest_Byte_Nova_Nest1Byte_context_Nova_testCode);
}

void novex_nest_Byte_Nova_Nest1Byte_void_Nova_super(novex_nest_Byte_Nova_Nest1Byte* this)
{
	this->novex_nest_Byte_Nova_Nest1Byte_Nova_class = (nova_meta_Nova_Class*)nova_null;
	this->prv->novex_nest_Byte_Nova_Nest1Byte_Nova_data = 0;
	novex_nest_Byte_Nova_Nest1Byte_Nova_out = nova_io_Nova_FancyOutputStream_Nova_construct(0,
		0,
		(int)(intptr_t)nova_null,
	0);
}

nova_io_Nova_FancyOutputStream* novex_nest_Double_Nova_Nest1Double_Nova_out;
char novex_nest_Double_Nova_Nest1Double_Nova_init_static_inited = 0;
void novex_nest_Double_Nova_Nest1Double_Nova_init_static()
{
	if (!novex_nest_Double_Nova_Nest1Double_Nova_init_static_inited) {
		novex_nest_Double_Nova_Nest1Double_Nova_init_static_inited = 1;
		{
		}
		{
		}
	}
}

novex_nest_Double_Nova_Nest1Double* novex_nest_Double_Nova_Nest1Double_double_Nest1Double_Nova_construct(novex_nest_Double_Nova_Nest1Double* this, double data)
{
	CCLASS_NEW(novex_nest_Double_Nova_Nest1Double, this);
	this->vtable = &novex_nest_Double_Nova_Nest1Double_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	novex_nest_Double_Nova_Nest1Double_void_Nova_super(this);
	
	return novex_nest_Double_Nova_Nest1Double_double_Nest1Double_Nova_this((novex_nest_Double_Nova_Nest1Double*)(this),
	data);
}

void novex_nest_Double_Nova_Nest1Double_void_Nova_destroy(novex_nest_Double_Nova_Nest1Double** this)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE((*this)->prv);
	nova_meta_Nova_Class_Nova_destroy(&(*this)->novex_nest_Double_Nova_Nest1Double_Nova_class);
	
	NOVA_FREE(*this);
}

novex_nest_Double_Nova_Nest1Double* novex_nest_Double_Nova_Nest1Double_double_Nest1Double_Nova_this(novex_nest_Double_Nova_Nest1Double* this, double data) {
	this->prv->novex_nest_Double_Nova_Nest1Double_Nova_data = data;
	this->prv->novex_nest_Double_Nova_Nest1Double_Nova_data = data;
	return this;
}
char novex_nest_Double_Nova_Nest1Double_double_String_char_Nova_toBe(novex_nest_Double_Nova_Nest1Double* this, double other, nova_Nova_String* message)
{
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)message);
	if (other != this->prv->novex_nest_Double_Nova_Nest1Double_Nova_data)
	{
		nova_Nova_String* l2_Nova_nova_local_0 = (nova_Nova_String*)nova_null;
		
		message = (nova_Nova_String*)((l2_Nova_nova_local_0 = message) != (nova_Nova_String*)nova_null ? (nova_Nova_Object*)l2_Nova_nova_local_0 : (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Double_static_Nova_toString((nova_primitive_number_Nova_Double*)(0),
									this->prv->novex_nest_Double_Nova_Nest1Double_Nova_data)),
									(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
													(char*)(" != "))),
											(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Double_static_Nova_toString((nova_primitive_number_Nova_Double*)(0),
																		other)),
																		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
																				(char*)("")))))))),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))))))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != "))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Double_static_Nova_toString((nova_primitive_number_Nova_Double*)(0),
													other)),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))),
								(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
										(char*)("")))))))));
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
		return 0;
	}
	return 1;
}

char novex_nest_Double_Nova_Nest1Double_double_String_char_Nova_toNotBe(novex_nest_Double_Nova_Nest1Double* this, double other, nova_Nova_String* message)
{
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)message);
	if (other == this->prv->novex_nest_Double_Nova_Nest1Double_Nova_data)
	{
		nova_Nova_String* l2_Nova_nova_local_0 = (nova_Nova_String*)nova_null;
		
		message = (nova_Nova_String*)((l2_Nova_nova_local_0 = message) != (nova_Nova_String*)nova_null ? (nova_Nova_Object*)l2_Nova_nova_local_0 : (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Double_static_Nova_toString((nova_primitive_number_Nova_Double*)(0),
									this->prv->novex_nest_Double_Nova_Nest1Double_Nova_data)),
									(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
													(char*)(" == "))),
											(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Double_static_Nova_toString((nova_primitive_number_Nova_Double*)(0),
																		other)),
																		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
																				(char*)("")))))))),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))))))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" == "))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Double_static_Nova_toString((nova_primitive_number_Nova_Double*)(0),
													other)),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))),
								(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
										(char*)("")))))))));
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
		return 0;
	}
	return 1;
}

char novex_nest_Double_Nova_Nest1Double_double_double_String_char_Nova_toBeWithinToleranceOf(novex_nest_Double_Nova_Nest1Double* this, double target, double tolerance, nova_Nova_String* message)
{
	tolerance = (double)(tolerance == (int)(intptr_t)nova_null ? 0.0001 : tolerance);
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)message);
	if (!nova_primitive_number_Nova_Double_static_Nova_withinTolerance((nova_primitive_number_Nova_Double*)(0),
			(double)((double)this->prv->novex_nest_Double_Nova_Nest1Double_Nova_data),
			target,
	tolerance))
	{
		nova_Nova_String* l2_Nova_nova_local_0 = (nova_Nova_String*)nova_null;
		
		message = (nova_Nova_String*)((l2_Nova_nova_local_0 = message) != (nova_Nova_String*)nova_null ? (nova_Nova_Object*)l2_Nova_nova_local_0 : (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Double_static_Nova_toString((nova_primitive_number_Nova_Double*)(0),
									this->prv->novex_nest_Double_Nova_Nest1Double_Nova_data)),
									(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
													(char*)(" not within tolerance of "))),
											(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Double_static_Nova_toString((nova_primitive_number_Nova_Double*)(0),
															(target))),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))))))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" not within tolerance of "))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Double_static_Nova_toString((nova_primitive_number_Nova_Double*)(0),
										(target))),
								(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
										(char*)("")))))))));
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
		return 0;
	}
	return 1;
}

void novex_nest_Double_Nova_Nest1Double_Class_String_int_void_Nova_toThrow(novex_nest_Double_Nova_Nest1Double* this, nova_meta_Nova_Class* exceptionType, nova_Nova_String* message, int soft)
{
	/*l1_closure1038_Nova_func*/nova_funcStruct* l1_Nova_func = (/*l1_closure1038_Nova_func*/nova_funcStruct*)nova_null;
	
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
					(char*)("Did not throw exception type "))),
			(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((exceptionType)))),
					(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("")))))) : (nova_Nova_Object*)message);
	soft = (int)(soft == (int)(intptr_t)nova_null ? 0 : soft);
	l1_Nova_func = (/*l1_closure1038_Nova_func*/nova_funcStruct*)(nova_primitive_number_Nova_Double_Nova_construct(0,
	this->prv->novex_nest_Double_Nova_Nest1Double_Nova_data));
	if (!nova_exception_Nova_Exception_static_Nova_catchType((nova_exception_Nova_Exception*)(0),
			(nova_exception_Nova_Exception_closure1353_Nova_func)(l1_Nova_func->func), l1_Nova_func->ref, l1_Nova_func->context,
			exceptionType,
			soft,
			(int)(intptr_t)nova_null))
	{
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
	}
}

void novex_nest_Double_Nova_Nest1Double_Class_String_int_void_Nova_toNotThrow(novex_nest_Double_Nova_Nest1Double* this, nova_meta_Nova_Class* exceptionType, nova_Nova_String* message, int soft)
{
	/*l1_closure1042_Nova_func*/nova_funcStruct* l1_Nova_func = (/*l1_closure1042_Nova_func*/nova_funcStruct*)nova_null;
	
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
					(char*)("Threw exception type "))),
			(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((exceptionType)))),
					(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("")))))) : (nova_Nova_Object*)message);
	soft = (int)(soft == (int)(intptr_t)nova_null ? 0 : soft);
	l1_Nova_func = (/*l1_closure1042_Nova_func*/nova_funcStruct*)(nova_primitive_number_Nova_Double_Nova_construct(0,
	this->prv->novex_nest_Double_Nova_Nest1Double_Nova_data));
	if (nova_exception_Nova_Exception_static_Nova_catchType((nova_exception_Nova_Exception*)(0),
			(nova_exception_Nova_Exception_closure1353_Nova_func)(l1_Nova_func->func), l1_Nova_func->ref, l1_Nova_func->context,
			exceptionType,
			soft,
			(int)(intptr_t)nova_null))
	{
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
	}
}

void novex_nest_Double_Nova_Nest1Double_String_void_static_Nova_fail(novex_nest_Double_Nova_Nest1Double* this, nova_Nova_String* message)
{
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)nova_Nova_String_1_Nova_construct(0,
			(char*)("Failure")) : (nova_Nova_Object*)message);
	THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
	message), 0);
}

novex_nest_Nova_Nest* novex_nest_Double_Nova_Nest1Double_T_Nest0_static_Nova_expect(novex_nest_Double_Nova_Nest1Double* this, nova_Nova_Object* obj)
{
	return novex_nest_Nova_Nest_Nova_construct(0,
		(nova_Nova_Object*)(obj));
}

novex_nest_Nova_Nest* novex_nest_Double_Nova_Nest1Double_null_Nest1_static_Nova_expect(novex_nest_Double_Nova_Nest1Double* this, novex_nest_Double_Nova_Nest1Double_closure416_Nova_func novex_nest_Double_Nova_Nest1Double_Nova_func, void* novex_nest_Double_Nova_Nest1Double_ref_Nova_func, void* novex_nest_Double_Nova_Nest1Double_context_Nova_func)
{
	return novex_nest_Nova_Nest_Nova_construct(0,
		(nova_Nova_Object*)nova_get_funcStruct3(novex_nest_Double_Nova_Nest1Double_Nova_func, novex_nest_Double_Nova_Nest1Double_ref_Nova_func, novex_nest_Double_Nova_Nest1Double_context_Nova_func));
}

void novex_nest_Double_Nova_Nest1Double_String_null_void_static_Nova_test(novex_nest_Double_Nova_Nest1Double* this, nova_Nova_String* description, novex_nest_Double_Nova_Nest1Double_closure418_Nova_testCode novex_nest_Double_Nova_Nest1Double_Nova_testCode, void* novex_nest_Double_Nova_Nest1Double_ref_Nova_testCode, void* novex_nest_Double_Nova_Nest1Double_context_Nova_testCode)
{
	novex_nest_Double_Nova_Nest1Double_Nova_testCode(novex_nest_Double_Nova_Nest1Double_ref_Nova_testCode,
	novex_nest_Double_Nova_Nest1Double_context_Nova_testCode);
}

void novex_nest_Double_Nova_Nest1Double_void_Nova_super(novex_nest_Double_Nova_Nest1Double* this)
{
	this->novex_nest_Double_Nova_Nest1Double_Nova_class = (nova_meta_Nova_Class*)nova_null;
	this->prv->novex_nest_Double_Nova_Nest1Double_Nova_data = 0;
	novex_nest_Double_Nova_Nest1Double_Nova_out = nova_io_Nova_FancyOutputStream_Nova_construct(0,
		0,
		(int)(intptr_t)nova_null,
	0);
}

nova_io_Nova_FancyOutputStream* novex_nest_Float_Nova_Nest1Float_Nova_out;
char novex_nest_Float_Nova_Nest1Float_Nova_init_static_inited = 0;
void novex_nest_Float_Nova_Nest1Float_Nova_init_static()
{
	if (!novex_nest_Float_Nova_Nest1Float_Nova_init_static_inited) {
		novex_nest_Float_Nova_Nest1Float_Nova_init_static_inited = 1;
		{
		}
		{
		}
	}
}

novex_nest_Float_Nova_Nest1Float* novex_nest_Float_Nova_Nest1Float_float_Nest1Float_Nova_construct(novex_nest_Float_Nova_Nest1Float* this, float data)
{
	CCLASS_NEW(novex_nest_Float_Nova_Nest1Float, this);
	this->vtable = &novex_nest_Float_Nova_Nest1Float_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	novex_nest_Float_Nova_Nest1Float_void_Nova_super(this);
	
	return novex_nest_Float_Nova_Nest1Float_float_Nest1Float_Nova_this((novex_nest_Float_Nova_Nest1Float*)(this),
	data);
}

void novex_nest_Float_Nova_Nest1Float_void_Nova_destroy(novex_nest_Float_Nova_Nest1Float** this)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE((*this)->prv);
	nova_meta_Nova_Class_Nova_destroy(&(*this)->novex_nest_Float_Nova_Nest1Float_Nova_class);
	
	NOVA_FREE(*this);
}

novex_nest_Float_Nova_Nest1Float* novex_nest_Float_Nova_Nest1Float_float_Nest1Float_Nova_this(novex_nest_Float_Nova_Nest1Float* this, float data) {
	this->prv->novex_nest_Float_Nova_Nest1Float_Nova_data = data;
	this->prv->novex_nest_Float_Nova_Nest1Float_Nova_data = data;
	return this;
}
char novex_nest_Float_Nova_Nest1Float_float_String_char_Nova_toBe(novex_nest_Float_Nova_Nest1Float* this, float other, nova_Nova_String* message)
{
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)message);
	if (other != this->prv->novex_nest_Float_Nova_Nest1Float_Nova_data)
	{
		nova_Nova_String* l15_Nova_nova_local_0 = (nova_Nova_String*)nova_null;
		
		message = (nova_Nova_String*)((l15_Nova_nova_local_0 = message) != (nova_Nova_String*)nova_null ? (nova_Nova_Object*)l15_Nova_nova_local_0 : (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Float_static_Nova_toString((nova_primitive_number_Nova_Float*)(0),
									this->prv->novex_nest_Float_Nova_Nest1Float_Nova_data)),
									(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
													(char*)(" != "))),
											(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Float_static_Nova_toString((nova_primitive_number_Nova_Float*)(0),
																		other)),
																		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
																				(char*)("")))))))),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))))))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != "))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Float_static_Nova_toString((nova_primitive_number_Nova_Float*)(0),
													other)),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))),
								(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
										(char*)("")))))))));
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
		return 0;
	}
	return 1;
}

char novex_nest_Float_Nova_Nest1Float_float_String_char_Nova_toNotBe(novex_nest_Float_Nova_Nest1Float* this, float other, nova_Nova_String* message)
{
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)message);
	if (other == this->prv->novex_nest_Float_Nova_Nest1Float_Nova_data)
	{
		nova_Nova_String* l15_Nova_nova_local_0 = (nova_Nova_String*)nova_null;
		
		message = (nova_Nova_String*)((l15_Nova_nova_local_0 = message) != (nova_Nova_String*)nova_null ? (nova_Nova_Object*)l15_Nova_nova_local_0 : (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Float_static_Nova_toString((nova_primitive_number_Nova_Float*)(0),
									this->prv->novex_nest_Float_Nova_Nest1Float_Nova_data)),
									(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
													(char*)(" == "))),
											(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Float_static_Nova_toString((nova_primitive_number_Nova_Float*)(0),
																		other)),
																		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
																				(char*)("")))))))),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))))))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" == "))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Float_static_Nova_toString((nova_primitive_number_Nova_Float*)(0),
													other)),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))),
								(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
										(char*)("")))))))));
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
		return 0;
	}
	return 1;
}

char novex_nest_Float_Nova_Nest1Float_double_double_String_char_Nova_toBeWithinToleranceOf(novex_nest_Float_Nova_Nest1Float* this, double target, double tolerance, nova_Nova_String* message)
{
	tolerance = (double)(tolerance == (int)(intptr_t)nova_null ? 0.0001 : tolerance);
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)message);
	if (!nova_primitive_number_Nova_Double_static_Nova_withinTolerance((nova_primitive_number_Nova_Double*)(0),
			(double)((double)this->prv->novex_nest_Float_Nova_Nest1Float_Nova_data),
			target,
	tolerance))
	{
		nova_Nova_String* l26_Nova_nova_local_0 = (nova_Nova_String*)nova_null;
		
		message = (nova_Nova_String*)((l26_Nova_nova_local_0 = message) != (nova_Nova_String*)nova_null ? (nova_Nova_Object*)l26_Nova_nova_local_0 : (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Float_static_Nova_toString((nova_primitive_number_Nova_Float*)(0),
									this->prv->novex_nest_Float_Nova_Nest1Float_Nova_data)),
									(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
													(char*)(" not within tolerance of "))),
											(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Double_static_Nova_toString((nova_primitive_number_Nova_Double*)(0),
															(target))),
													(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
															(char*)("")))))))))))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" not within tolerance of "))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Double_static_Nova_toString((nova_primitive_number_Nova_Double*)(0),
										(target))),
								(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
										(char*)("")))))))));
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
		return 0;
	}
	return 1;
}

void novex_nest_Float_Nova_Nest1Float_Class_String_int_void_Nova_toThrow(novex_nest_Float_Nova_Nest1Float* this, nova_meta_Nova_Class* exceptionType, nova_Nova_String* message, int soft)
{
	/*l1_closure1051_Nova_func*/nova_funcStruct* l1_Nova_func = (/*l1_closure1051_Nova_func*/nova_funcStruct*)nova_null;
	
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
					(char*)("Did not throw exception type "))),
			(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((exceptionType)))),
					(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("")))))) : (nova_Nova_Object*)message);
	soft = (int)(soft == (int)(intptr_t)nova_null ? 0 : soft);
	l1_Nova_func = (/*l1_closure1051_Nova_func*/nova_funcStruct*)(nova_primitive_number_Nova_Float_Nova_construct(0,
	this->prv->novex_nest_Float_Nova_Nest1Float_Nova_data));
	if (!nova_exception_Nova_Exception_static_Nova_catchType((nova_exception_Nova_Exception*)(0),
			(nova_exception_Nova_Exception_closure1353_Nova_func)(l1_Nova_func->func), l1_Nova_func->ref, l1_Nova_func->context,
			exceptionType,
			soft,
			(int)(intptr_t)nova_null))
	{
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
	}
}

void novex_nest_Float_Nova_Nest1Float_Class_String_int_void_Nova_toNotThrow(novex_nest_Float_Nova_Nest1Float* this, nova_meta_Nova_Class* exceptionType, nova_Nova_String* message, int soft)
{
	/*l1_closure1055_Nova_func*/nova_funcStruct* l1_Nova_func = (/*l1_closure1055_Nova_func*/nova_funcStruct*)nova_null;
	
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
					(char*)("Threw exception type "))),
			(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((exceptionType)))),
					(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("")))))) : (nova_Nova_Object*)message);
	soft = (int)(soft == (int)(intptr_t)nova_null ? 0 : soft);
	l1_Nova_func = (/*l1_closure1055_Nova_func*/nova_funcStruct*)(nova_primitive_number_Nova_Float_Nova_construct(0,
	this->prv->novex_nest_Float_Nova_Nest1Float_Nova_data));
	if (nova_exception_Nova_Exception_static_Nova_catchType((nova_exception_Nova_Exception*)(0),
			(nova_exception_Nova_Exception_closure1353_Nova_func)(l1_Nova_func->func), l1_Nova_func->ref, l1_Nova_func->context,
			exceptionType,
			soft,
			(int)(intptr_t)nova_null))
	{
		THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
		message), 0);
	}
}

void novex_nest_Float_Nova_Nest1Float_String_void_static_Nova_fail(novex_nest_Float_Nova_Nest1Float* this, nova_Nova_String* message)
{
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)nova_Nova_String_1_Nova_construct(0,
			(char*)("Failure")) : (nova_Nova_Object*)message);
	THROW(novex_nest_Nova_InvalidAssertionException_Nova_construct(0,
	message), 0);
}

novex_nest_Nova_Nest* novex_nest_Float_Nova_Nest1Float_T_Nest0_static_Nova_expect(novex_nest_Float_Nova_Nest1Float* this, nova_Nova_Object* obj)
{
	return novex_nest_Nova_Nest_Nova_construct(0,
		(nova_Nova_Object*)(obj));
}

novex_nest_Nova_Nest* novex_nest_Float_Nova_Nest1Float_null_Nest1_static_Nova_expect(novex_nest_Float_Nova_Nest1Float* this, novex_nest_Float_Nova_Nest1Float_closure424_Nova_func novex_nest_Float_Nova_Nest1Float_Nova_func, void* novex_nest_Float_Nova_Nest1Float_ref_Nova_func, void* novex_nest_Float_Nova_Nest1Float_context_Nova_func)
{
	return novex_nest_Nova_Nest_Nova_construct(0,
		(nova_Nova_Object*)nova_get_funcStruct3(novex_nest_Float_Nova_Nest1Float_Nova_func, novex_nest_Float_Nova_Nest1Float_ref_Nova_func, novex_nest_Float_Nova_Nest1Float_context_Nova_func));
}

void novex_nest_Float_Nova_Nest1Float_String_null_void_static_Nova_test(novex_nest_Float_Nova_Nest1Float* this, nova_Nova_String* description, novex_nest_Float_Nova_Nest1Float_closure426_Nova_testCode novex_nest_Float_Nova_Nest1Float_Nova_testCode, void* novex_nest_Float_Nova_Nest1Float_ref_Nova_testCode, void* novex_nest_Float_Nova_Nest1Float_context_Nova_testCode)
{
	novex_nest_Float_Nova_Nest1Float_Nova_testCode(novex_nest_Float_Nova_Nest1Float_ref_Nova_testCode,
	novex_nest_Float_Nova_Nest1Float_context_Nova_testCode);
}

void novex_nest_Float_Nova_Nest1Float_void_Nova_super(novex_nest_Float_Nova_Nest1Float* this)
{
	this->novex_nest_Float_Nova_Nest1Float_Nova_class = (nova_meta_Nova_Class*)nova_null;
	this->prv->novex_nest_Float_Nova_Nest1Float_Nova_data = 0;
	novex_nest_Float_Nova_Nest1Float_Nova_out = nova_io_Nova_FancyOutputStream_Nova_construct(0,
		0,
		(int)(intptr_t)nova_null,
	0);
}




char novex_nest_Nova_NestException_Nova_init_static_inited = 0;
void novex_nest_Nova_NestException_Nova_init_static()
{
	if (!novex_nest_Nova_NestException_Nova_init_static_inited) {
		novex_nest_Nova_NestException_Nova_init_static_inited = 1;
		{
		}
	}
}

novex_nest_Nova_NestException* novex_nest_Nova_NestException_Nova_construct(novex_nest_Nova_NestException* this, nova_Nova_String* message)
{
	CCLASS_NEW(novex_nest_Nova_NestException, this,);
	this->vtable = &novex_nest_Nova_NestException_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	nova_exception_Nova_Exception_Nova_super((nova_exception_Nova_Exception*)this);
	novex_nest_Nova_NestException_Nova_super(this);
	
	return novex_nest_Nova_NestException_Nova_this((novex_nest_Nova_NestException*)(this),
	message);
}

void novex_nest_Nova_NestException_Nova_destroy(novex_nest_Nova_NestException** this)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

novex_nest_Nova_NestException* novex_nest_Nova_NestException_Nova_this(novex_nest_Nova_NestException* this, nova_Nova_String* message) {
	nova_exception_Nova_Exception_Nova_this((nova_exception_Nova_Exception*)(this),
	message);
	return this;
}
void novex_nest_Nova_NestException_Nova_super(novex_nest_Nova_NestException* this)
{
}









int novex_nest_Nova_TestCase_Nova_staticId;
char novex_nest_Nova_TestCase_Nova_init_static_inited = 0;
void novex_nest_Nova_TestCase_Nova_init_static()
{
	if (!novex_nest_Nova_TestCase_Nova_init_static_inited) {
		novex_nest_Nova_TestCase_Nova_init_static_inited = 1;
		{
			novex_nest_Nova_TestCase_Nova_staticId = (int)(0);
		}
	}
}

novex_nest_Nova_TestCase* novex_nest_Nova_TestCase_Nova_construct(novex_nest_Nova_TestCase* this, nova_Nova_String* functionName, nova_Nova_String* description)
{
	CCLASS_NEW(novex_nest_Nova_TestCase, this,);
	this->vtable = &novex_nest_Nova_TestCase_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	novex_nest_Nova_TestCase_Nova_super(this);
	
	return novex_nest_Nova_TestCase_Nova_this((novex_nest_Nova_TestCase*)(this),
		functionName,
	description);
}

void novex_nest_Nova_TestCase_Nova_destroy(novex_nest_Nova_TestCase** this)
{
	if (!*this)
	{
		return;
	}
	
	nova_Nova_String_Nova_destroy(&(*this)->novex_nest_Nova_TestCase_Nova_functionName);
	nova_Nova_String_Nova_destroy(&(*this)->novex_nest_Nova_TestCase_Nova_description);
	
	
	NOVA_FREE(*this);
}

novex_nest_Nova_TestCase* novex_nest_Nova_TestCase_Nova_this(novex_nest_Nova_TestCase* this, nova_Nova_String* functionName, nova_Nova_String* description) {
	description = (nova_Nova_String*)(description == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)description);
	this->novex_nest_Nova_TestCase_Nova_functionName = functionName;
	this->novex_nest_Nova_TestCase_Nova_description = description;
	return this;
}
char novex_nest_Nova_TestCase_0_Nova_equals(novex_nest_Nova_TestCase* this, novex_nest_Nova_TestCase* other)
{
	return this->novex_nest_Nova_TestCase_Nova_id == other->novex_nest_Nova_TestCase_Nova_id;
}

nova_Nova_String* novex_nest_Nova_TestCase_Nova_toString(novex_nest_Nova_TestCase* this)
{
	return (nova_Nova_String*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("\""))),
		(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((novex_nest_Nova_TestCase_Accessor_Nova_header((novex_nest_Nova_TestCase*)(this)))),
				(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("\""))))));
}

nova_Nova_String* novex_nest_Nova_TestCase_Accessor_Nova_header(novex_nest_Nova_TestCase* this)
{
	nova_Nova_String* nova_local_0 = (nova_Nova_String*)nova_null;
	
	return (nova_Nova_String*)((nova_local_0 = this->novex_nest_Nova_TestCase_Nova_description) != (nova_Nova_String*)nova_null ? nova_local_0 : this->novex_nest_Nova_TestCase_Nova_functionName);
}


long_long novex_nest_Nova_TestCase_Accessor_Nova_hashCodeLong(novex_nest_Nova_TestCase* this)
{
	return (long_long)this->novex_nest_Nova_TestCase_Nova_id;
}


void novex_nest_Nova_TestCase_Nova_super(novex_nest_Nova_TestCase* this)
{
	this->novex_nest_Nova_TestCase_Nova_functionName = (nova_Nova_String*)nova_null;
	this->novex_nest_Nova_TestCase_Nova_description = (nova_Nova_String*)nova_null;
	this->novex_nest_Nova_TestCase_Nova_id = 0;
	this->novex_nest_Nova_TestCase_Nova_id = ++novex_nest_Nova_TestCase_Nova_staticId;
}




char novex_nest_Nova_TestResult_Nova_init_static_inited = 0;
void novex_nest_Nova_TestResult_Nova_init_static()
{
	if (!novex_nest_Nova_TestResult_Nova_init_static_inited) {
		novex_nest_Nova_TestResult_Nova_init_static_inited = 1;
		{
		}
	}
}

novex_nest_Nova_TestResult* novex_nest_Nova_TestResult_Nova_construct(novex_nest_Nova_TestResult* this, char success, nova_time_Nova_Timer* timer, novex_nest_Nova_TestCase* testCase)
{
	CCLASS_NEW(novex_nest_Nova_TestResult, this,);
	this->vtable = &novex_nest_Nova_TestResult_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	novex_nest_Nova_TestResult_Nova_super(this);
	
	return novex_nest_Nova_TestResult_Nova_this((novex_nest_Nova_TestResult*)(this),
		success,
		timer,
	testCase);
}

void novex_nest_Nova_TestResult_Nova_destroy(novex_nest_Nova_TestResult** this)
{
	if (!*this)
	{
		return;
	}
	
	
	nova_time_Nova_Timer_Nova_destroy(&(*this)->novex_nest_Nova_TestResult_Nova_timer);
	novex_nest_Nova_TestCase_Nova_destroy(&(*this)->novex_nest_Nova_TestResult_Nova_testCase);
	
	NOVA_FREE(*this);
}

novex_nest_Nova_TestResult* novex_nest_Nova_TestResult_Nova_this(novex_nest_Nova_TestResult* this, char success, nova_time_Nova_Timer* timer, novex_nest_Nova_TestCase* testCase) {
	this->novex_nest_Nova_TestResult_Nova_success = success;
	this->novex_nest_Nova_TestResult_Nova_timer = timer;
	this->novex_nest_Nova_TestResult_Nova_testCase = testCase;
	return this;
}
nova_Nova_String* novex_nest_Nova_TestResult_Nova_toString(novex_nest_Nova_TestResult* this)
{
	return (nova_Nova_String*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((this->novex_nest_Nova_TestResult_Nova_testCase)))),
				(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
						(char*)(" => "))))),
		(nova_Nova_Object*)(((nova_Nova_String*)(this->novex_nest_Nova_TestResult_Nova_success ? nova_Nova_String_1_Nova_construct(0,
						(char*)("Success")) : nova_Nova_String_1_Nova_construct(0,
						(char*)("Failure"))))));
}

void novex_nest_Nova_TestResult_Nova_super(novex_nest_Nova_TestResult* this)
{
	this->novex_nest_Nova_TestResult_Nova_success = 0;
	this->novex_nest_Nova_TestResult_Nova_timer = (nova_time_Nova_Timer*)nova_null;
	this->novex_nest_Nova_TestResult_Nova_testCase = (novex_nest_Nova_TestCase*)nova_null;
}


typedef struct
{
} Context220;


void novex_nest_Nova_TestRunner_Nova_lambda199(novex_nest_Nova_TestRunner* this, novex_nest_Nova_TestResult* _1, Context220* context);

void novex_nest_Nova_TestRunner_Nova_lambda199(novex_nest_Nova_TestRunner* this, novex_nest_Nova_TestResult* _1, Context220* context);
char novex_nest_Nova_TestRunner_Nova_init_static_inited = 0;
void novex_nest_Nova_TestRunner_Nova_init_static()
{
	if (!novex_nest_Nova_TestRunner_Nova_init_static_inited) {
		novex_nest_Nova_TestRunner_Nova_init_static_inited = 1;
		{
		}
	}
}

void novex_nest_Nova_TestRunner_Nova_runTests(novex_nest_Nova_TestRunner* this, novex_nest_Nova_TestRunner_closure1061_Nova_onResult novex_nest_Nova_TestRunner_Nova_onResult, void* novex_nest_Nova_TestRunner_ref_Nova_onResult, void* novex_nest_Nova_TestRunner_context_Nova_onResult, nova_io_Nova_OutputStream* out)
{
	Context220* contextArg199 = NOVA_MALLOC(sizeof(Context220));
	novex_nest_Nova_TestRunner_Nova_onResult = (novex_nest_Nova_TestRunner_closure1061_Nova_onResult)(novex_nest_Nova_TestRunner_Nova_onResult == 0 ? (novex_nest_Nova_TestRunner_closure1061_Nova_onResult)&novex_nest_Nova_TestRunner_Nova_lambda199 : novex_nest_Nova_TestRunner_Nova_onResult);
	novex_nest_Nova_TestRunner_ref_Nova_onResult = (void*)(novex_nest_Nova_TestRunner_ref_Nova_onResult == 0 ? (void*)this : novex_nest_Nova_TestRunner_ref_Nova_onResult);
	novex_nest_Nova_TestRunner_context_Nova_onResult = (void*)(novex_nest_Nova_TestRunner_context_Nova_onResult == 0 ? (void*)contextArg199 : novex_nest_Nova_TestRunner_context_Nova_onResult);
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
}

void novex_nest_Nova_TestRunner_Nova_lambda199(novex_nest_Nova_TestRunner* this, novex_nest_Nova_TestResult* _1, Context220* context)
{
}

novex_nest_Nova_TestRunnerModel* novex_nest_Nova_TestRunner_Accessorfunc_Nova_model(novex_nest_Nova_TestRunner* this)
{
	return (novex_nest_Nova_TestRunnerModel*)(nova_Nova_Object*)nova_null;
}


nova_datastruct_list_Nova_Array* novex_nest_Nova_TestRunner_Accessor_Nova_testCases(novex_nest_Nova_TestRunner* this)
{
	return novex_nest_Nova_TestRunnerModel_virtual_Accessorfunc_Nova_testCases((novex_nest_Nova_TestRunnerModel*)(novex_nest_Nova_TestRunner_virtual_Accessorfunc_Nova_model((novex_nest_Nova_TestRunner*)(this))));
}


nova_Nova_String* novex_nest_Nova_TestRunner_Accessorfunc_Nova_description(novex_nest_Nova_TestRunner* this)
{
	return novex_nest_Nova_TestRunner_virtual_Accessorfunc_Nova_model((novex_nest_Nova_TestRunner*)(this))->novex_nest_Nova_TestRunnerModel_Nova_description;
}





char novex_nest_Nova_TestRunnerModel_Nova_init_static_inited = 0;
void novex_nest_Nova_TestRunnerModel_Nova_init_static()
{
	if (!novex_nest_Nova_TestRunnerModel_Nova_init_static_inited) {
		novex_nest_Nova_TestRunnerModel_Nova_init_static_inited = 1;
		{
		}
	}
}

novex_nest_Nova_TestRunnerModel* novex_nest_Nova_TestRunnerModel_Nova_construct(novex_nest_Nova_TestRunnerModel* this, nova_datastruct_list_Nova_Array* testCases, nova_Nova_String* description)
{
	CCLASS_NEW(novex_nest_Nova_TestRunnerModel, this,);
	this->vtable = &novex_nest_Nova_TestRunnerModel_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	novex_nest_Nova_TestRunnerModel_Nova_super(this);
	
	return novex_nest_Nova_TestRunnerModel_Nova_this((novex_nest_Nova_TestRunnerModel*)(this),
		testCases,
	description);
}

void novex_nest_Nova_TestRunnerModel_Nova_destroy(novex_nest_Nova_TestRunnerModel** this)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->novex_nest_Nova_TestRunnerModel_Nova_testCases);
	nova_Nova_String_Nova_destroy(&(*this)->novex_nest_Nova_TestRunnerModel_Nova_description);
	
	NOVA_FREE(*this);
}

novex_nest_Nova_TestRunnerModel* novex_nest_Nova_TestRunnerModel_Nova_this(novex_nest_Nova_TestRunnerModel* this, nova_datastruct_list_Nova_Array* testCases, nova_Nova_String* description) {
	description = (nova_Nova_String*)(description == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)description);
	novex_nest_Nova_TestRunnerModel_Mutatorfunc_Nova_testCases((novex_nest_Nova_TestRunnerModel*)(this),
	testCases);
	this->novex_nest_Nova_TestRunnerModel_Nova_description = description;
	return this;
}
nova_Nova_String* novex_nest_Nova_TestRunnerModel_Nova_toString(novex_nest_Nova_TestRunnerModel* this)
{
	return (nova_Nova_String*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("TestRunnerModel"))),
		(nova_Nova_Object*)(((nova_Nova_String*)((this->novex_nest_Nova_TestRunnerModel_Nova_description) != (nova_Nova_String*)nova_null ? (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" \""))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(this->novex_nest_Nova_TestRunnerModel_Nova_description),
								(nova_Nova_Object*)(nova_primitive_number_Nova_Char_static_Nova_toString((nova_primitive_number_Nova_Char*)(0),
					'"'))))) : (nova_Nova_Object*)nova_Nova_String_1_Nova_construct(0,
						(char*)(""))))));
}

nova_datastruct_list_Nova_Array* novex_nest_Nova_TestRunnerModel_Accessorfunc_Nova_testCases(novex_nest_Nova_TestRunnerModel* this)
{
	return this->novex_nest_Nova_TestRunnerModel_Nova_testCases;
}

nova_datastruct_list_Nova_Array* novex_nest_Nova_TestRunnerModel_Mutatorfunc_Nova_testCases(novex_nest_Nova_TestRunnerModel* this, nova_datastruct_list_Nova_Array* value)
{
	this->novex_nest_Nova_TestRunnerModel_Nova_testCases = value;
	return value;
}

void novex_nest_Nova_TestRunnerModel_Nova_super(novex_nest_Nova_TestRunnerModel* this)
{
	this->novex_nest_Nova_TestRunnerModel_Nova_testCases = (nova_datastruct_list_Nova_Array*)nova_null;
	this->novex_nest_Nova_TestRunnerModel_Nova_description = (nova_Nova_String*)nova_null;
}




char novex_nest_Nova_TestSuite_Nova_init_static_inited = 0;
void novex_nest_Nova_TestSuite_Nova_init_static()
{
	if (!novex_nest_Nova_TestSuite_Nova_init_static_inited) {
		novex_nest_Nova_TestSuite_Nova_init_static_inited = 1;
		{
		}
	}
}

novex_nest_Nova_TestSuite* novex_nest_Nova_TestSuite_Nova_construct(novex_nest_Nova_TestSuite* this, nova_datastruct_list_Nova_Array* testRunners)
{
	CCLASS_NEW(novex_nest_Nova_TestSuite, this,);
	this->vtable = &novex_nest_Nova_TestSuite_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	novex_nest_Nova_TestSuite_Nova_super(this);
	
	return novex_nest_Nova_TestSuite_Nova_this((novex_nest_Nova_TestSuite*)(this),
	testRunners);
}

void novex_nest_Nova_TestSuite_Nova_destroy(novex_nest_Nova_TestSuite** this)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->novex_nest_Nova_TestSuite_Nova_testRunners);
	
	NOVA_FREE(*this);
}

novex_nest_Nova_TestSuite* novex_nest_Nova_TestSuite_Nova_this(novex_nest_Nova_TestSuite* this, nova_datastruct_list_Nova_Array* testRunners) {
	this->novex_nest_Nova_TestSuite_Nova_testRunners = testRunners;
	return this;
}
nova_Nova_String* novex_nest_Nova_TestSuite_Nova_toString(novex_nest_Nova_TestSuite* this)
{
	return (nova_Nova_String*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("TestSuite"))),
		(nova_Nova_Object*)(((nova_Nova_String*)((this->novex_nest_Nova_TestSuite_Nova_testRunners) != (nova_datastruct_list_Nova_Array*)nova_null ? (nova_Nova_Object*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" "))),
						(nova_Nova_Object*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(this->novex_nest_Nova_TestSuite_Nova_testRunners)))) : (nova_Nova_Object*)nova_Nova_String_1_Nova_construct(0,
						(char*)(""))))));
}

void novex_nest_Nova_TestSuite_Nova_super(novex_nest_Nova_TestSuite* this)
{
	this->novex_nest_Nova_TestSuite_Nova_testRunners = (nova_datastruct_list_Nova_Array*)nova_null;
}




char novex_nest_Nova_TestSuiteRunner_Nova_init_static_inited = 0;
void novex_nest_Nova_TestSuiteRunner_Nova_init_static()
{
	if (!novex_nest_Nova_TestSuiteRunner_Nova_init_static_inited) {
		novex_nest_Nova_TestSuiteRunner_Nova_init_static_inited = 1;
		{
		}
	}
}


typedef struct
{
} Context5;
typedef struct
{
} Context6;


nova_datastruct_list_Nova_Array* novex_nest_Nova_TestSuiteRunnerModel_Nova_lambda6(novex_nest_Nova_TestSuiteRunnerModel* this, nova_datastruct_list_Nova_Array* _1, novex_nest_Nova_TestRunnerModel* _2, int _3, nova_datastruct_list_Nova_List* _4, Context5* context);
nova_datastruct_list_Nova_Array* novex_nest_Nova_TestSuiteRunnerModel_Nova_lambda7(novex_nest_Nova_TestSuiteRunnerModel* this, nova_datastruct_list_Nova_Array* _1, novex_nest_Nova_TestSuite* _2, int _3, nova_datastruct_list_Nova_List* _4, Context6* context);



nova_datastruct_list_Nova_Array* novex_nest_Nova_TestSuiteRunnerModel_Nova_lambda6(novex_nest_Nova_TestSuiteRunnerModel* this, nova_datastruct_list_Nova_Array* _1, novex_nest_Nova_TestRunnerModel* _2, int _3, nova_datastruct_list_Nova_List* _4, Context5* context);
nova_datastruct_list_Nova_Array* novex_nest_Nova_TestSuiteRunnerModel_Nova_lambda7(novex_nest_Nova_TestSuiteRunnerModel* this, nova_datastruct_list_Nova_Array* _1, novex_nest_Nova_TestSuite* _2, int _3, nova_datastruct_list_Nova_List* _4, Context6* context);


char novex_nest_Nova_TestSuiteRunnerModel_Nova_init_static_inited = 0;
void novex_nest_Nova_TestSuiteRunnerModel_Nova_init_static()
{
	if (!novex_nest_Nova_TestSuiteRunnerModel_Nova_init_static_inited) {
		novex_nest_Nova_TestSuiteRunnerModel_Nova_init_static_inited = 1;
		{
		}
	}
}

novex_nest_Nova_TestSuiteRunnerModel* novex_nest_Nova_TestSuiteRunnerModel_Nova_construct(novex_nest_Nova_TestSuiteRunnerModel* this, nova_datastruct_list_Nova_Array* testSuites)
{
	CCLASS_NEW(novex_nest_Nova_TestSuiteRunnerModel, this,);
	this->vtable = &novex_nest_Nova_TestSuiteRunnerModel_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	novex_nest_Nova_TestRunnerModel_Nova_super((novex_nest_Nova_TestRunnerModel*)this);
	novex_nest_Nova_TestSuiteRunnerModel_Nova_super(this);
	
	return novex_nest_Nova_TestSuiteRunnerModel_Nova_this((novex_nest_Nova_TestSuiteRunnerModel*)(this),
	testSuites);
}

void novex_nest_Nova_TestSuiteRunnerModel_Nova_destroy(novex_nest_Nova_TestSuiteRunnerModel** this)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->novex_nest_Nova_TestSuiteRunnerModel_Nova_testCases);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->novex_nest_Nova_TestSuiteRunnerModel_Nova_testSuites);
	
	NOVA_FREE(*this);
}

novex_nest_Nova_TestSuiteRunnerModel* novex_nest_Nova_TestSuiteRunnerModel_Nova_this(novex_nest_Nova_TestSuiteRunnerModel* this, nova_datastruct_list_Nova_Array* testSuites) {
	this->novex_nest_Nova_TestSuiteRunnerModel_Nova_testSuites = testSuites;
	novex_nest_Nova_TestRunnerModel_Nova_this((novex_nest_Nova_TestRunnerModel*)(this),
		(nova_datastruct_list_Nova_Array*)((nova_Nova_Object*)nova_null),
		(nova_Nova_String*)((nova_Nova_Object*)nova_null));
	return this;
}
nova_datastruct_list_Nova_Array* novex_nest_Nova_TestSuiteRunnerModel_Nova_lambda6(novex_nest_Nova_TestSuiteRunnerModel* this, nova_datastruct_list_Nova_Array* _1, novex_nest_Nova_TestRunnerModel* _2, int _3, nova_datastruct_list_Nova_List* _4, Context5* context)
{
	return (nova_datastruct_list_Nova_Array*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(_1),
		(nova_Nova_Object*)(novex_nest_Nova_TestRunnerModel_virtual_Accessorfunc_Nova_testCases((novex_nest_Nova_TestRunnerModel*)(_2))));
}

nova_datastruct_list_Nova_Array* novex_nest_Nova_TestSuiteRunnerModel_Nova_lambda7(novex_nest_Nova_TestSuiteRunnerModel* this, nova_datastruct_list_Nova_Array* _1, novex_nest_Nova_TestSuite* _2, int _3, nova_datastruct_list_Nova_List* _4, Context6* context)
{
	return (nova_datastruct_list_Nova_Array*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(_1),
		(nova_Nova_Object*)(_2->novex_nest_Nova_TestSuite_Nova_testRunners));
}

nova_datastruct_list_Nova_Array* novex_nest_Nova_TestSuiteRunnerModel_Accessorfunc_Nova_testCases(novex_nest_Nova_TestSuiteRunnerModel* this)
{
	Context5* contextArg6 = NOVA_MALLOC(sizeof(Context5));
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_Nova_reduce((nova_datastruct_list_Nova_List*)(novex_nest_Nova_TestSuiteRunnerModel_Accessor_Nova_testRunners((novex_nest_Nova_TestSuiteRunnerModel*)(this))),
		(nova_datastruct_list_Nova_List_closure1351_Nova_func)&novex_nest_Nova_TestSuiteRunnerModel_Nova_lambda6, this, contextArg6,
		(nova_Nova_Object*)(nova_datastruct_list_Nova_Array_1_Nova_construct(0,
				0,
				(int)(intptr_t)nova_null)));
}


nova_datastruct_list_Nova_Array* novex_nest_Nova_TestSuiteRunnerModel_Accessor_Nova_testRunners(novex_nest_Nova_TestSuiteRunnerModel* this)
{
	Context6* contextArg7 = NOVA_MALLOC(sizeof(Context6));
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_Nova_reduce((nova_datastruct_list_Nova_List*)(this->novex_nest_Nova_TestSuiteRunnerModel_Nova_testSuites),
		(nova_datastruct_list_Nova_List_closure1351_Nova_func)&novex_nest_Nova_TestSuiteRunnerModel_Nova_lambda7, this, contextArg7,
		(nova_Nova_Object*)(nova_datastruct_list_Nova_Array_1_Nova_construct(0,
				0,
				(int)(intptr_t)nova_null)));
}


void novex_nest_Nova_TestSuiteRunnerModel_Nova_super(novex_nest_Nova_TestSuiteRunnerModel* this)
{
	this->novex_nest_Nova_TestSuiteRunnerModel_Nova_testCases = (nova_datastruct_list_Nova_Array*)nova_null;
	this->novex_nest_Nova_TestSuiteRunnerModel_Nova_testSuites = (nova_datastruct_list_Nova_Array*)nova_null;
}




CCLASS_PRIVATE
(
	novex_nest_ui_Nova_ResultBar,
	nova_star_Nova_Panel* novex_nest_ui_Nova_ResultBar_Nova_successPanel;
	nova_star_Nova_Panel* novex_nest_ui_Nova_ResultBar_Nova_failurePanel;
	
)
void novex_nest_ui_Nova_ResultBar_Nova_refreshWidth(novex_nest_ui_Nova_ResultBar* this);


void novex_nest_ui_Nova_ResultBar_Nova_refreshWidth(novex_nest_ui_Nova_ResultBar* this);

char novex_nest_ui_Nova_ResultBar_Nova_init_static_inited = 0;
void novex_nest_ui_Nova_ResultBar_Nova_init_static()
{
	if (!novex_nest_ui_Nova_ResultBar_Nova_init_static_inited) {
		novex_nest_ui_Nova_ResultBar_Nova_init_static_inited = 1;
		{
		}
	}
}

novex_nest_ui_Nova_ResultBar* novex_nest_ui_Nova_ResultBar_Nova_construct(novex_nest_ui_Nova_ResultBar* this, int x, int y, int width, int height, int borderSize)
{
	CCLASS_NEW(novex_nest_ui_Nova_ResultBar, this);
	this->vtable = &novex_nest_ui_Nova_ResultBar_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	nova_star_Nova_UIComponent_Nova_super((nova_star_Nova_UIComponent*)this);
	nova_star_Nova_Panel_Nova_super((nova_star_Nova_Panel*)this);
	novex_nest_ui_Nova_ResultBar_Nova_super(this);
	
	return novex_nest_ui_Nova_ResultBar_Nova_this((novex_nest_ui_Nova_ResultBar*)(this),
		x,
		y,
		width,
		height,
	borderSize);
}

void novex_nest_ui_Nova_ResultBar_Nova_destroy(novex_nest_ui_Nova_ResultBar** this)
{
	if (!*this)
	{
		return;
	}
	
	nova_star_Nova_Panel_Nova_destroy(&(*this)->prv->novex_nest_ui_Nova_ResultBar_Nova_successPanel);
	nova_star_Nova_Panel_Nova_destroy(&(*this)->prv->novex_nest_ui_Nova_ResultBar_Nova_failurePanel);
	NOVA_FREE((*this)->prv);
	
	
	
	
	NOVA_FREE(*this);
}

novex_nest_ui_Nova_ResultBar* novex_nest_ui_Nova_ResultBar_Nova_this(novex_nest_ui_Nova_ResultBar* this, int x, int y, int width, int height, int borderSize) {
	x = (int)(x == (int)(intptr_t)nova_null ? 0 : x);
	y = (int)(y == (int)(intptr_t)nova_null ? 0 : y);
	width = (int)(width == (int)(intptr_t)nova_null ? 150 : width);
	height = (int)(height == (int)(intptr_t)nova_null ? 25 : height);
	borderSize = (int)(borderSize == (int)(intptr_t)nova_null ? 3 : borderSize);
	this->novex_nest_ui_Nova_ResultBar_Nova_borderSize = borderSize;
	nova_star_Nova_Panel_Nova_this((nova_star_Nova_Panel*)(this),
		x,
		y,
		width,
	height);
	this->nova_star_Nova_Panel_Nova_backgroundColor = nova_star_Nova_Color_1_Nova_construct(0,
	200);
	this->prv->novex_nest_ui_Nova_ResultBar_Nova_failurePanel = nova_star_Nova_Panel_Nova_construct(0,
		borderSize,
		borderSize,
		width - borderSize * 2,
	height - borderSize * 2);
	this->prv->novex_nest_ui_Nova_ResultBar_Nova_failurePanel->nova_star_Nova_Panel_Nova_backgroundColor = nova_star_Nova_Color_Nova_RED;
	nova_star_Nova_UIParent_Nova_addChild((nova_star_Nova_UIParent*)(this),
		(nova_star_Nova_UIComponent*)(this->prv->novex_nest_ui_Nova_ResultBar_Nova_failurePanel));
	this->prv->novex_nest_ui_Nova_ResultBar_Nova_successPanel = nova_star_Nova_Panel_Nova_construct(0,
		borderSize,
		borderSize,
		width - borderSize * 2,
	height - borderSize * 2);
	this->prv->novex_nest_ui_Nova_ResultBar_Nova_successPanel->nova_star_Nova_Panel_Nova_backgroundColor = nova_star_Nova_Color_Nova_GREEN;
	nova_star_Nova_UIParent_Nova_addChild((nova_star_Nova_UIParent*)(this),
		(nova_star_Nova_UIComponent*)(this->prv->novex_nest_ui_Nova_ResultBar_Nova_successPanel));
	return this;
}
void novex_nest_ui_Nova_ResultBar_Nova_refreshWidth(novex_nest_ui_Nova_ResultBar* this)
{
	this->prv->novex_nest_ui_Nova_ResultBar_Nova_successPanel->nova_star_Nova_Panel_Nova_width = (int)(nova_math_Nova_Math_0_static_Nova_max((nova_math_Nova_Math*)(0),
			0,
			(int)((((double)(this->novex_nest_ui_Nova_ResultBar_Nova_testCount != 0 ? (double)this->novex_nest_ui_Nova_ResultBar_Nova_successCount / (double)this->novex_nest_ui_Nova_ResultBar_Nova_testCount : (double)1)) * this->nova_star_Nova_Panel_Nova_width) - this->novex_nest_ui_Nova_ResultBar_Nova_borderSize * 2)));
	nova_star_Nova_UIComponent_Nova_repaint((nova_star_Nova_UIComponent*)(this->prv->novex_nest_ui_Nova_ResultBar_Nova_successPanel));
}

int novex_nest_ui_Nova_ResultBar_Mutatorfunc_Nova_testCount(novex_nest_ui_Nova_ResultBar* this, int value)
{
	this->novex_nest_ui_Nova_ResultBar_Nova_testCount = value;
	novex_nest_ui_Nova_ResultBar_Nova_refreshWidth((novex_nest_ui_Nova_ResultBar*)(this));
	return value;
}

int novex_nest_ui_Nova_ResultBar_Mutatorfunc_Nova_successCount(novex_nest_ui_Nova_ResultBar* this, int value)
{
	this->novex_nest_ui_Nova_ResultBar_Nova_successCount = value;
	novex_nest_ui_Nova_ResultBar_Nova_refreshWidth((novex_nest_ui_Nova_ResultBar*)(this));
	return value;
}

int novex_nest_ui_Nova_ResultBar_Accessor_Nova_failureCount(novex_nest_ui_Nova_ResultBar* this)
{
	return this->novex_nest_ui_Nova_ResultBar_Nova_testCount - this->novex_nest_ui_Nova_ResultBar_Nova_successCount;
}


void novex_nest_ui_Nova_ResultBar_Nova_super(novex_nest_ui_Nova_ResultBar* this)
{
	this->novex_nest_ui_Nova_ResultBar_Nova_borderSize = 0;
	this->novex_nest_ui_Nova_ResultBar_Nova_testCount = 0;
	this->novex_nest_ui_Nova_ResultBar_Nova_successCount = 0;
	this->prv->novex_nest_ui_Nova_ResultBar_Nova_successPanel = (nova_star_Nova_Panel*)nova_null;
	this->prv->novex_nest_ui_Nova_ResultBar_Nova_failurePanel = (nova_star_Nova_Panel*)nova_null;
}


typedef struct
{
	/* let
	HashMap<TestCase, Tuple2<Label, ResultBar>> bars */ nova_datastruct_Nova_HashMap** novex_nest_ui_Nova_ResultWindow_Nova_bars;
} Context149;
typedef struct
{
	/* let
	HashMap<TestCase, Tuple2<Label, ResultBar>> bars */ nova_datastruct_Nova_HashMap** novex_nest_ui_Nova_ResultWindow_Nova_bars;
} Context150;


void novex_nest_ui_Nova_ResultWindow_Nova_lambda128(novex_nest_ui_Nova_ResultWindow* this, novex_nest_Nova_TestCase* _case, int i, nova_datastruct_list_Nova_Array* _3, Context149* context);
void novex_nest_ui_Nova_ResultWindow_Nova_lambda129(novex_nest_ui_Nova_ResultWindow* this, novex_nest_Nova_TestResult* result, Context150* context);

void novex_nest_ui_Nova_ResultWindow_Nova_lambda128(novex_nest_ui_Nova_ResultWindow* this, novex_nest_Nova_TestCase* _case, int i, nova_datastruct_list_Nova_Array* _3, Context149* context);
void novex_nest_ui_Nova_ResultWindow_Nova_lambda129(novex_nest_ui_Nova_ResultWindow* this, novex_nest_Nova_TestResult* result, Context150* context);
char novex_nest_ui_Nova_ResultWindow_Nova_init_static_inited = 0;
void novex_nest_ui_Nova_ResultWindow_Nova_init_static()
{
	if (!novex_nest_ui_Nova_ResultWindow_Nova_init_static_inited) {
		novex_nest_ui_Nova_ResultWindow_Nova_init_static_inited = 1;
		{
		}
	}
}

novex_nest_ui_Nova_ResultWindow* novex_nest_ui_Nova_ResultWindow_Nova_construct(novex_nest_ui_Nova_ResultWindow* this, novex_nest_Nova_TestRunner* runner, nova_io_Nova_OutputStream* out)
{
	CCLASS_NEW(novex_nest_ui_Nova_ResultWindow, this,);
	this->vtable = &novex_nest_ui_Nova_ResultWindow_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	nova_star_Nova_Window_Nova_super((nova_star_Nova_Window*)this);
	novex_nest_ui_Nova_ResultWindow_Nova_super(this);
	
	return novex_nest_ui_Nova_ResultWindow_Nova_this((novex_nest_ui_Nova_ResultWindow*)(this),
		runner,
	out);
}

void novex_nest_ui_Nova_ResultWindow_Nova_destroy(novex_nest_ui_Nova_ResultWindow** this)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

novex_nest_ui_Nova_ResultWindow* novex_nest_ui_Nova_ResultWindow_Nova_this(novex_nest_ui_Nova_ResultWindow* this, novex_nest_Nova_TestRunner* runner, nova_io_Nova_OutputStream* out) {
	Context149* contextArg128 = NOVA_MALLOC(sizeof(Context149));
	Context150* contextArg129 = NOVA_MALLOC(sizeof(Context150));
	nova_datastruct_Nova_HashMap* l1_Nova_bars = (nova_datastruct_Nova_HashMap*)nova_null;
	nova_datastruct_Nova_HashMap** heap149_0 = (nova_datastruct_Nova_HashMap**)NOVA_MALLOC(sizeof(nova_datastruct_Nova_HashMap*));
	*heap149_0 = l1_Nova_bars;
	contextArg128->novex_nest_ui_Nova_ResultWindow_Nova_bars = heap149_0;
	nova_datastruct_Nova_HashMap** heap150_0 = heap149_0;
	contextArg129->novex_nest_ui_Nova_ResultWindow_Nova_bars = heap149_0;
	int l1_Nova_maxLabelWidth = 0;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_OutputStream_Nova_EMPTY : (nova_Nova_Object*)out);
	nova_star_Nova_Window_Nova_this((nova_star_Nova_Window*)(this),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Results")),
		0,
		0,
		800,
	500);
	nova_io_Nova_Console_static_Nova_log((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Test case count: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_datastruct_list_Nova_List_virtual_Accessorfunc_Nova_count((nova_datastruct_list_Nova_List*)(novex_nest_Nova_TestRunner_Accessor_Nova_testCases((novex_nest_Nova_TestRunner*)(runner))))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	(*heap149_0) = nova_datastruct_Nova_HashMap_0_Nova_construct(0,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null);
	l1_Nova_maxLabelWidth = (int)(0);
	nova_datastruct_list_Nova_List_virtual1_Nova_forEach((nova_datastruct_list_Nova_List*)(novex_nest_Nova_TestRunner_Accessor_Nova_testCases((novex_nest_Nova_TestRunner*)(runner))),
		(nova_datastruct_list_Nova_List_closure1336_Nova_func)&novex_nest_ui_Nova_ResultWindow_Nova_lambda128, this, contextArg128);
	novex_nest_Nova_TestRunner_virtual_Nova_runTests((novex_nest_Nova_TestRunner*)(runner),
		(novex_nest_Nova_TestRunner_closure1061_Nova_onResult)&novex_nest_ui_Nova_ResultWindow_Nova_lambda129, this, contextArg129,
	out);
	nova_star_Nova_Window_Nova_center((nova_star_Nova_Window*)(this));
	return this;
}
void novex_nest_ui_Nova_ResultWindow_Nova_lambda128(novex_nest_ui_Nova_ResultWindow* this, novex_nest_Nova_TestCase* _case, int i, nova_datastruct_list_Nova_Array* _3, Context149* context)
{
	int l1_Nova_y = 0;
	novex_nest_ui_Nova_ResultBar* l1_Nova_resultBar = (novex_nest_ui_Nova_ResultBar*)nova_null;
	nova_star_Nova_Label* l1_Nova_label = (nova_star_Nova_Label*)nova_null;
	
	l1_Nova_y = (int)(20 + (30 * i));
	l1_Nova_resultBar = novex_nest_ui_Nova_ResultBar_Nova_construct(0,
		10,
		l1_Nova_y,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null);
	novex_nest_ui_Nova_ResultBar_Mutatorfunc_Nova_testCount((novex_nest_ui_Nova_ResultBar*)(l1_Nova_resultBar),
	1);
	novex_nest_ui_Nova_ResultBar_Mutatorfunc_Nova_successCount((novex_nest_ui_Nova_ResultBar*)(l1_Nova_resultBar),
	0);
	l1_Nova_label = nova_star_Nova_Label_Nova_construct(0,
		novex_nest_Nova_TestCase_Accessor_Nova_header((novex_nest_Nova_TestCase*)(_case)),
		10 + l1_Nova_resultBar->nova_star_Nova_Panel_Nova_width + 10,
	l1_Nova_y + 5);
	nova_star_Nova_UIParent_Nova_addChild((nova_star_Nova_UIParent*)(this->frame),
		(nova_star_Nova_UIComponent*)(l1_Nova_resultBar));
	nova_star_Nova_UIParent_Nova_addChild((nova_star_Nova_UIParent*)(this->frame),
		(nova_star_Nova_UIComponent*)(l1_Nova_label));
	nova_datastruct_Nova_HashMap_Nova_set((nova_datastruct_Nova_HashMap*)((*context->novex_nest_ui_Nova_ResultWindow_Nova_bars)),
		(nova_operators_Nova_EqualsOperator*)(_case),
		(nova_Nova_Object*)(nova_datastruct_Nova_Tuple2_Nova_construct(0,
				(nova_Nova_Object*)(l1_Nova_label),
				(nova_Nova_Object*)(l1_Nova_resultBar))));
}

void novex_nest_ui_Nova_ResultWindow_Nova_lambda129(novex_nest_ui_Nova_ResultWindow* this, novex_nest_Nova_TestResult* result, Context150* context)
{
	nova_datastruct_Nova_Tuple2* l2_Nova_bar = (nova_datastruct_Nova_Tuple2*)nova_null;
	
	if ((l2_Nova_bar = (nova_datastruct_Nova_Tuple2*)(nova_datastruct_Nova_HashMap_Nova_get((nova_datastruct_Nova_HashMap*)((*context->novex_nest_ui_Nova_ResultWindow_Nova_bars)),
					(nova_operators_Nova_EqualsOperator*)(result->novex_nest_Nova_TestResult_Nova_testCase)))) != (nova_datastruct_Nova_Tuple2*)nova_null)
	{
		novex_nest_ui_Nova_ResultBar_Mutatorfunc_Nova_successCount((novex_nest_ui_Nova_ResultBar*)(nova_datastruct_Nova_Tuple2_Accessor_Nova_item2((nova_datastruct_Nova_Tuple2*)(l2_Nova_bar))),
		1);
	}
}

void novex_nest_ui_Nova_ResultWindow_Nova_super(novex_nest_ui_Nova_ResultWindow* this)
{
}


typedef struct
{
} Context151;
typedef struct
{
} Context152;


void novex_nest_Nova_EmbeddedNestTest_Nova_embeddedFunction(novex_nest_Nova_EmbeddedNestTest* this, nova_io_Nova_OutputStream* out);
void novex_nest_Nova_EmbeddedNestTest_Nova_lambdaFunction(novex_nest_Nova_EmbeddedNestTest* this, nova_io_Nova_OutputStream* out);
void novex_nest_Nova_EmbeddedNestTest_Nova_lambda130(novex_nest_Nova_EmbeddedNestTest* this, Context151* context);
void novex_nest_Nova_EmbeddedNestTest_Nova_lambda131(novex_nest_Nova_EmbeddedNestTest* this, Context152* context);

void novex_nest_Nova_EmbeddedNestTest_Nova_embeddedFunction(novex_nest_Nova_EmbeddedNestTest* this, nova_io_Nova_OutputStream* out);
void novex_nest_Nova_EmbeddedNestTest_Nova_lambdaFunction(novex_nest_Nova_EmbeddedNestTest* this, nova_io_Nova_OutputStream* out);
void novex_nest_Nova_EmbeddedNestTest_Nova_lambda130(novex_nest_Nova_EmbeddedNestTest* this, Context151* context);
void novex_nest_Nova_EmbeddedNestTest_Nova_lambda131(novex_nest_Nova_EmbeddedNestTest* this, Context152* context);
char novex_nest_Nova_EmbeddedNestTest_Nova_init_static_inited = 0;
void novex_nest_Nova_EmbeddedNestTest_Nova_init_static()
{
	if (!novex_nest_Nova_EmbeddedNestTest_Nova_init_static_inited) {
		novex_nest_Nova_EmbeddedNestTest_Nova_init_static_inited = 1;
		{
		}
	}
}

novex_nest_Nova_EmbeddedNestTest* novex_nest_Nova_EmbeddedNestTest_Nova_construct(novex_nest_Nova_EmbeddedNestTest* this)
{
	CCLASS_NEW(novex_nest_Nova_EmbeddedNestTest, this,);
	this->vtable = &novex_nest_Nova_EmbeddedNestTest_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	novex_nest_Nova_EmbeddedNestTest_Nova_super(this);
	
	return novex_nest_Nova_EmbeddedNestTest_Nova_this((novex_nest_Nova_EmbeddedNestTest*)(this));
}

void novex_nest_Nova_EmbeddedNestTest_Nova_destroy(novex_nest_Nova_EmbeddedNestTest** this)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void novex_nest_Nova_EmbeddedNestTest_Nova_embeddedFunction(novex_nest_Nova_EmbeddedNestTest* this, nova_io_Nova_OutputStream* out)
{
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing embeddedFunction ")));
}

void novex_nest_Nova_EmbeddedNestTest_Nova_lambdaFunction(novex_nest_Nova_EmbeddedNestTest* this, nova_io_Nova_OutputStream* out)
{
	Context151* contextArg130 = NOVA_MALLOC(sizeof(Context151));
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing lambdaFunction ")));
	novex_nest_Nova_Nest_static_Nova_test((novex_nest_Nova_Nest*)(this),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("something")),
		(novex_nest_Nova_Nest_closure964_Nova_testCode)&novex_nest_Nova_EmbeddedNestTest_Nova_lambda130, this, contextArg130);
}

novex_nest_Nova_EmbeddedNestTest* novex_nest_Nova_EmbeddedNestTest_Nova_this(novex_nest_Nova_EmbeddedNestTest* this) {
	return this;
}
void novex_nest_Nova_EmbeddedNestTest_Nova_lambda130(novex_nest_Nova_EmbeddedNestTest* this, Context151* context)
{
	Context152* contextArg131 = NOVA_MALLOC(sizeof(Context152));
	novex_nest_Nova_Nest_Nova_toThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&novex_nest_Nova_EmbeddedNestTest_Nova_lambda131, this, contextArg131)),
		(nova_meta_Nova_Class*)(novex_nest_Nova_NestException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
}

void novex_nest_Nova_EmbeddedNestTest_Nova_lambda131(novex_nest_Nova_EmbeddedNestTest* this, Context152* context)
{
}

void novex_nest_Nova_EmbeddedNestTest_Nova_super(novex_nest_Nova_EmbeddedNestTest* this)
{
}




void novex_nest_Nova_TypeNestTest_Nova_integer(novex_nest_Nova_TypeNestTest* this, nova_io_Nova_OutputStream* out);
void novex_nest_Nova_TypeNestTest_Nova_real(novex_nest_Nova_TypeNestTest* this, nova_io_Nova_OutputStream* out);

void novex_nest_Nova_TypeNestTest_Nova_integer(novex_nest_Nova_TypeNestTest* this, nova_io_Nova_OutputStream* out);
void novex_nest_Nova_TypeNestTest_Nova_real(novex_nest_Nova_TypeNestTest* this, nova_io_Nova_OutputStream* out);
char novex_nest_Nova_TypeNestTest_Nova_init_static_inited = 0;
void novex_nest_Nova_TypeNestTest_Nova_init_static()
{
	if (!novex_nest_Nova_TypeNestTest_Nova_init_static_inited) {
		novex_nest_Nova_TypeNestTest_Nova_init_static_inited = 1;
		{
		}
	}
}

novex_nest_Nova_TypeNestTest* novex_nest_Nova_TypeNestTest_Nova_construct(novex_nest_Nova_TypeNestTest* this)
{
	CCLASS_NEW(novex_nest_Nova_TypeNestTest, this,);
	this->vtable = &novex_nest_Nova_TypeNestTest_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	novex_nest_Nova_TypeNestTest_Nova_super(this);
	
	return novex_nest_Nova_TypeNestTest_Nova_this((novex_nest_Nova_TypeNestTest*)(this));
}

void novex_nest_Nova_TypeNestTest_Nova_destroy(novex_nest_Nova_TypeNestTest** this)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void novex_nest_Nova_TypeNestTest_Nova_integer(novex_nest_Nova_TypeNestTest* this, nova_io_Nova_OutputStream* out)
{
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing integer ")));
	novex_nest_Byte_Nova_Nest1Byte_char_String_char_Nova_toBe((novex_nest_Byte_Nova_Nest1Byte*)(novex_nest_Nova_Nest_char_Nest1Byte239_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		5)),
		5,
	0);
}

void novex_nest_Nova_TypeNestTest_Nova_real(novex_nest_Nova_TypeNestTest* this, nova_io_Nova_OutputStream* out)
{
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing real ")));
	novex_nest_Float_Nova_Nest1Float_float_String_char_Nova_toBe((novex_nest_Float_Nova_Nest1Float*)(novex_nest_Nova_Nest_float_Nest1Float240_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		5.0)),
		5.0,
	0);
	novex_nest_Float_Nova_Nest1Float_double_double_String_char_Nova_toBeWithinToleranceOf((novex_nest_Float_Nova_Nest1Float*)(novex_nest_Nova_Nest_float_Nest1Float241_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		5.0 * 2)),
		10,
		(int)(intptr_t)nova_null,
	0);
}

novex_nest_Nova_TypeNestTest* novex_nest_Nova_TypeNestTest_Nova_this(novex_nest_Nova_TypeNestTest* this) {
	return this;
}
void novex_nest_Nova_TypeNestTest_Nova_super(novex_nest_Nova_TypeNestTest* this)
{
}


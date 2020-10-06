#include <lcom/lcf.h>

#include <stdint.h>

int(util_get_LSB)(uint16_t val, uint8_t *lsb) {
  /* To be implemented by the students */
  //printf("%s is not yet implemented!\n", __func__);
  uint16_t hexa=0x0F;
  lsb= (val&hexa);
  return 0;

  
}

int(util_get_MSB)(uint16_t val, uint8_t *msb) {
  /* To be implemented by the students */
  //printf("%s is not yet implemented!\n", __func__);
 uint16_t hexa=0xF0;
  lsb= (val&hexa);
  return 0;

}

int (util_sys_inb)(int port, uint8_t *value) {
  /* To be implemented by the students */
  u32_t* call;
  uint32_t a = sys_inb(port,call);
  uint32_t hexa = 0xFF;
  value= (a & hexa);
  return 0;
}
